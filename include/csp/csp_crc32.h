/*
Cubesat Space Protocol - A small network-layer protocol designed for Cubesats
Copyright (C) 2012 GomSpace ApS (http://www.gomspace.com)
Copyright (C) 2012 AAUSAT3 Project (http://aausat3.space.aau.dk)

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#pragma once

/**
   @file
   CRC32 support.
*/

#include <csp/csp.h>

/**
   Append CRC32 checksum to packet
   @param[in] packet CSP packet, must be valid.
   @return #CSP_ERR_NONE on success, otherwise an error code.
*/
int csp_crc32_append(csp_packet_t * packet);

/**
   Verify CRC32 checksum on packet.
   @param[in] packet CSP packet, must be valid.
   @return #CSP_ERR_NONE on success, otherwise an error code.
*/
int csp_crc32_verify(csp_packet_t * packet);

/**
   Calculate checksum for a given memory area.
   @param[in] addr memory address
   @param[in] length length of memory to do checksum on
   @return checksum
*/
uint32_t csp_crc32_memory(const uint8_t * addr, uint32_t length);

