cmake_minimum_required(VERSION 3.13.5)

project(GamesExBlocker LANGUAGES C)

if (NOT WIN32)
    message(FATAL_ERROR "Windows is the only supported platform!")
endif()

add_library(dummy SHARED DllMain.c)

set_target_properties(dummy PROPERTIES PREFIX "")
set_target_properties(dummy PROPERTIES OUTPUT_NAME "GameUXLegacyGDFs")
set_target_properties(dummy PROPERTIES SUFFIX ".dll")
