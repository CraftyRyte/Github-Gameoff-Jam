# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib_cpp-src"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib_cpp-build"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib_cpp-subbuild/raylib_cpp-populate-prefix"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib_cpp-subbuild/raylib_cpp-populate-prefix/tmp"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib_cpp-subbuild/raylib_cpp-populate-prefix/src/raylib_cpp-populate-stamp"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib_cpp-subbuild/raylib_cpp-populate-prefix/src"
  "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib_cpp-subbuild/raylib_cpp-populate-prefix/src/raylib_cpp-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib_cpp-subbuild/raylib_cpp-populate-prefix/src/raylib_cpp-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Hp/Desktop/ALL_MY_CODE/Github-Gameoff-Jam/build/_deps/raylib_cpp-subbuild/raylib_cpp-populate-prefix/src/raylib_cpp-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
