/**
 * Copyright (C) 2019 Xilinx, Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef _XRT_CORE_PCIE_WINDOWS_MGMT_H
#define _XRT_CORE_PCIE_WINDOWS_MGMT_H

#include "core/pcie/windows/config.h"
#include "xrt.h"

namespace mgmt { // shared implementation

XRT_CORE_PCIE_WINDOWS_EXPORT
unsigned int
probe();

XRT_CORE_PCIE_WINDOWS_EXPORT
xclDeviceHandle
open(unsigned int);

XRT_CORE_PCIE_WINDOWS_EXPORT
void
close(xclDeviceHandle hdl);

XRT_CORE_PCIE_WINDOWS_EXPORT
void
read_bar(xclDeviceHandle hdl, uint64_t offset, void* buf, uint64_t len);

XRT_CORE_PCIE_WINDOWS_EXPORT
void
write_bar(xclDeviceHandle hdl, uint64_t offset, const void* buf, uint64_t len);

} // mgmt

#endif