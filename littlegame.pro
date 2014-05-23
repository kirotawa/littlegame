
SOURCES += \
    src/view.cpp \
    src/monster.cpp \
    src/gamescene.cpp \
    src/objects.cpp \
    main.cpp



HEADERS += \
    src/include/view.h \
    src/include/monster.h \
    src/include/gamescene.h \
    src/include/objects.h


INCLUDEPATH+=	src
INCLUDEPATH+=	src/include

RESOURCES += \
    data/background.qrc

sources.files = $$SOURCES $$HEADERS $$RESOURCES  littlegame.pro data
