# E4Track
Energy measurement functions for track objects

## Classes

### PhysdEdx

Functions for Landau-Vavilov theory.  
This class is valid for muons, charged pions, charged kaons and protons.  
Call this class wiht valid PdgID numbers.  

- Muons: 13
- Charged pions: 211
- Charged kaons: 321
- Protons: 2212

### Hypfit

Functions for the hypothetical track-length fitting method. This class uses the PhysdEdx class.  

Inputs are residual range vector, dE/dx vector and PdgID.  
Some notes,  
- Residual range and dE/dx vectors should be ordered that the first elements must be for the hit with the shortest residual range.
- Functions are valid for muons, charged pions, charged kaons and protons.
- Tunable parameters are defined in the header.

## Compile and test

### Clone this repository and compile

This repository should work well at dunegpvm servers.
```
git clone git@github.com:E4LArTPC/E4Track.git
cd E4Track
source setup.sh
mkdir build
cd build
cmake ..
cmake --build . -- install
```

### Test

```
cd ..
root -l -b -q run_test.C
```
