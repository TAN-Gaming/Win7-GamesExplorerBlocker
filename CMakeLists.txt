cmake_minimum_required(VERSION 3.15)

###################################
project(GamesExBlocker LANGUAGES C)
###################################

if (NOT WIN32)
  message(FATAL_ERROR "Windows is the only supported platform.")
endif()

add_library(GameUXLegacyGDFs SHARED DllMain.c)
