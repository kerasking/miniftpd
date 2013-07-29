TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.c \
    sysutil.c \
    session.c \
    ftpproto.c \
    privparent.c \
    str.c \
    tunable.c \
    parseconf.c \
    privsock.c \
    hash.c

HEADERS += \
    sysutil.h \
    common.h \
    session.h \
    ftpproto.h \
    privparent.h \
    str.h \
    tunable.h \
    parseconf.h \
    ftpcodes.h \
    privsock.h \
    hash.h

OTHER_FILES += \
    CMakeLists.txt \
    miniftpd.conf \
    build.sh \
    build/bin/miniftpd.conf

