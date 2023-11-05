# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib-src"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib-build"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib-subbuild/raylib-populate-prefix"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib-subbuild/raylib-populate-prefix/tmp"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib-subbuild/raylib-populate-prefix/src"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
