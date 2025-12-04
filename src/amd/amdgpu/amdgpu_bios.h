#ifndef __AMDGPU_BIOS_H__
#define __AMDGPU_BIOS_H__

#include <linux/types.h>

struct amd_fake_dev;

bool amdgpu_read_bios(struct amd_fake_dev *adev);
bool amdgpu_get_bios(struct amd_fake_dev *adev);

#endif
