#### Setup Directories ####
source /cvmfs/fermilab.opensciencegrid.org/packages/common/setup-env.sh ## -- For Alma 9
source /cvmfs/larsoft.opensciencegrid.org/spack-packages/setup-env.sh
spack load root@6.28.12

export ROOT_INCLUDE_PATH=/cvmfs/larsoft.opensciencegrid.org/spack-packages/opt/spack/linux-almalinux9-x86_64_v2/gcc-12.2.0/root-6.28.12-sfwfmqorvxttrxgfrfhoq5kplou2pddd/include/:$ROOT_INCLUDE_PATH
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$LArProf_LIB_PATH:/cvmfs/larsoft.opensciencegrid.org/spack-packages/opt/spack/linux-almalinux9-x86_64_v2/gcc-12.2.0/root-6.28.12-sfwfmqorvxttrxgfrfhoq5kplou2pddd/lib/
