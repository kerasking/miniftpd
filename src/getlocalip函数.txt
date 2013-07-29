如果发现PORT与PASV模式无法工作，可能原因是无法准确获取本地IP地址。可以尝试下面这种方法获取ip。


int getlocalip(const char *ip)
{
    int sockfd; 
    if(-1 == (sockfd = socket(PF_INET, SOCK_STREAM, 0)))
    {
        perror( "socket" );
        return -1;
    }
    struct ifreq req;
    struct sockaddr_in *host;
    bzero(&req, sizeof(struct ifreq));
    strcpy(req.ifr_name, "eth0"); 
    ioctl(sockfd, SIOCGIFADDR, &req);
    host = (struct sockaddr_in*)&req.ifr_addr;
    strcpy(ip, inet_ntoa(host->sin_addr));
    close(sockfd);
    return 1;
}