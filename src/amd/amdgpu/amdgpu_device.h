#ifndef __AMDGPU_DEVICE_H__
#define __AMDGPU_DEVICE_H__

#include <linux/types.h>

struct amd_fake_dev;

void amdgpu_device_vram_access(struct amd_fake_dev *adev, loff_t pos,
                               uint32_t *buf, size_t size, bool write);

#endif
