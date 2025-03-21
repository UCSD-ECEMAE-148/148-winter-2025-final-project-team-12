# Install script for directory: /home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk_install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/sdk_core/cmake_install.cmake")
  include("/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/sample/hub/cmake_install.cmake")
  include("/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/sample/lidar/cmake_install.cmake")
  include("/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/sample/hub_lvx_file/cmake_install.cmake")
  include("/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/sample/lidar_lvx_file/cmake_install.cmake")
  include("/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/sample_cc/hub/cmake_install.cmake")
  include("/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/sample_cc/lidar/cmake_install.cmake")
  include("/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/sample_cc/trouble_shooting/cmake_install.cmake")
  include("/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/sample_cc/lidar_utc_sync/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/projects/sensor_ws/src/lidars/livox/build/livox_sdk_vendor/livox-sdk-v2.3.0-prefix/src/livox-sdk-v2.3.0-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
