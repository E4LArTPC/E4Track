#ifndef Hypfit_h
#define Hypfit_h

#include <iostream>
#include <vector>

#include "PhysdEdx.h"

using namespace std;

class Hypfit {

public:

  Hypfit();
  virtual ~Hypfit();
  
  std::map< int, PhysdEdx* > map_PhysdEdx;
  double Gaussian(const vector<double> & dEdx, const vector<double> & ResRange, int PID);
  double Likelihood(const vector<double> & dEdx, const vector<double> & ResRange, int PID);

private:

  // == Tunable parameters
  int N_skip = 3;
  double max_additional_res_length_pion = 450.; // == [cm]
  double max_additional_res_length_proton = 120.; // == [cm]
  double res_length_step_pion = 1.0; // == [cm]
  double res_length_step_proton = 0.2; // == [cm]
  double dEdx_truncate_upper_pion = 5.;
  double dEdx_truncate_bellow_pion = 0.5;
  double dEdx_truncate_upper_proton = 20.;
  double dEdx_truncate_bellow_proton = 0.2;
};

#endif
