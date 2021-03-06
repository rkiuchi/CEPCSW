# CEPCSW

CEPC offline software prototype based on Gaudi.

The core part of this project (CEPCSW/FWCore) is taken from FCCSW/FWCore.
Please refer to https://github.com/HEP-FCC/FCCSW

## Quick start

```
$ source /cvmfs/cepcsw.ihep.ac.cn/prototype/setup.sh
$ git clone git@cepcgit.ihep.ac.cn:cepc-prototype/CEPCSW.git
$ cd CEPCSW
$ mkdir build && cd build
$ cmake ..
$ make
$ ./run gaudirun.py '$EXAMPLESROOT/options/helloalg.py'
```

## Packages

* Examples: For new comers and users

* Detector: Geometry

* Generator: Physics Generator

* Simulation: Detector Simulation

* Reconstruction: Reconstruction

* Service: Common Service

* FWCore: Core Software Based on Gaudi

* cepcenv: tools to help developers build packages

## Full Chain

Detector simulation: 
```
$ ./run gaudirun.py '$EXAMPLESROOT/options/tut_detsim.py'
```

## Conventions for collections
Keep the collection names compatible between the prototype and the existing CEPC software.

* MCParticle
* VXDCollection
* SITCollection
* TPCCollection
* SETCollection
