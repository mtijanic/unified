# Locate Lua library
# This module defines
#  LuaJIT_FOUND, if false, do not try to link to Lua
#  LUAJIT_LIBRARY
#  LUAJIT_INCLUDE_DIR, where to find lua.h

SET (LuaJIT_FOUND FALSE)

SET (LUAJIT_INTERPRETER_TYPE "LuaJIT")
SET (LUAJIT_LIBRARY_NAME luajit-5.1)
SET (LUAJIT_INCLUDE_DIRS /usr/include/luajit-2.0 /usr/include/luajit-2.1 /usr/local/include/luajit-2.0 /usr/local/include/luajit-2.1)


FIND_PATH (LUAJIT_INCLUDE_DIR lua.h ${LUAJIT_INCLUDE_DIRS} )
FIND_LIBRARY (LUAJIT_LIBRARY NAMES ${LUAJIT_LIBRARY_NAME} PATHS /usr/lib /usr/local/lib)

IF (LUAJIT_INCLUDE_DIR AND LUAJIT_LIBRARY)
    SET (LuaJIT_FOUND TRUE)
ENDIF (LUAJIT_INCLUDE_DIR AND LUAJIT_LIBRARY)

IF (LuaJIT_FOUND)
    IF (NOT LuaJIT_FIND_QUIETLY)
        MESSAGE(STATUS "Found ${LUAJIT_INTERPRETER_TYPE} library: ${LUAJIT_LIBRARY}")
    ENDIF (NOT LuaJIT_FIND_QUIETLY)
ELSE (LuaJIT_FOUND)
   IF (LuaJIT_FIND_REQUIRED)
       MESSAGE(FATAL_ERROR "Could not find ${LUAJIT_INTERPRETER_TYPE}")
   ENDIF (LuaJIT_FIND_REQUIRED)
ENDIF (LuaJIT_FOUND)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(Lua  DEFAULT_MSG LUAJIT_LIBRARY LUAJIT_INCLUDE_DIR)

MARK_AS_ADVANCED ( LUAJIT_INCLUDE_DIR LUAJIT_LIBRARY)
