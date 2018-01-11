if(WIN32)
# TODO-WINDOWS: Use the Linux API dir temporarily
    set(APIDIR "Linux")
elseif(UNIX)
    set(APIDIR "Linux")
endif()

nwnxlib_add("Globals.cpp" "${APIDIR}/API/UnityBuild.cpp")
set(APIDIR ${CMAKE_CURRENT_SOURCE_DIR}/${APIDIR} PARENT_SCOPE)
