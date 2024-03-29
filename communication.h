/* Copyright 2020 Purdea Andrei
 * Copyright 2023 Matthew Wolf
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <hidapi.h>
#include <string>
#include <vector>
#include "device.h"

#define PID_CODES_USB_PID 0x1209
// #define QMK_USB_PID 0xfeed
#define PANDREW_USB_ID 0x0481

class Communication
{
public:
    Communication();
    virtual ~Communication();
    std::vector<std::string> scan();
    Device *open(std::string path);
private:
    QMutex mutex;
};

#endif // COMMUNICATION_H
