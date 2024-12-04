# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(kim_test2)
FILE(GLOB app_sources src/*.c)
target_include_directories(app PRIVATE
    ${ZEPHYR_BASE}/../modules/hal/stm32/cmsis
    ${ZEPHYR_BASE}/../modules/hal/stm32/cmsis/include
)
target_sources(app PRIVATE src/main.c)
