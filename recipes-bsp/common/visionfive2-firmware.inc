VISIONFIVE2FW_DATE ?= "20231221^"
# JH7110_VF2_6.1_v5.11.3
SRC_URI += "git://github.com/starfive-tech/soft_3rdpart.git;protocol=https;lfs=1;nobranch=1;rev=5eca20d2ce6fb7b18044bfe30c5bfd7f8f47958d"
HOMEPAGE ?= "https://github.com/starfive-tech/soft_3rdpart"

IMG_GPU_POWERVR_VERSION = "img-gpu-powervr-bin-1.19.6345021"

# Star64 kernel is currently based on Linux 5.15, not supporting the latest GPU blobs
IMG_GPU_POWERVR_VERSION:star64 = "img-gpu-powervr-bin-1.17.6210866"

PV ?= "${VISIONFIVE2FW_DATE}"
