/**
* LICENSE PLACEHOLDER
*
* @file convert.h
* @package openpst/libopenpst
* @brief hexdump helper functions
*
* @author Gassan Idriss <ghassani@gmail.com>
* @author Matteson Raab <mraabhimself@gmail.com>
*/
#pragma once

#include "definitions.h"
#include "util/hexdump.h"
#include <iostream>
#include <stdio.h>

std::string bytesToHex(unsigned char* input, int size, bool byteswap);
std::string hexToString(char *input, int length);
std::string min1Decode(unsigned char input[3]);
std::string min2Decode(unsigned char input[1]);
std::string sidDecode(unsigned char input[1]);
long HexToBytes(std::string input);
