#include "./src/Hypfit.h"

void run_test(){

  Hypfit m;
  PhysdEdx *proton_dedx = new PhysdEdx(2212);

  vector<double> test_rr = {2., 4., 6., 8., 10., 12., 14., 16., 18., 20., 22., 24., 26., 28., 30.};
  vector<double> test_dedx = {6., 5.8, 5.6, 5.4, 5.2, 5.0, 4.8, 4.6, 4.4, 4.2, 4.0, 3.8, 3.6, 3.4, 3.2};

  double test_p_likelihood_KE = m.Likelihood(test_dedx, test_rr, 2212);
  double test_p_gaus_KE = m.Gaussian(test_dedx, test_rr, 2212);
  cout << "Test using eye-guessed data points from proton's rr vs dE/dx MPV distribution" << endl;
  cout << "Original residual length = 40 cm, but cut the first 10cm" << endl;
  cout << "proton KE(rr = 40 cm): " << proton_dedx -> KEFromRangeSpline(40.) << endl;
  cout << "proton KE(rr = 30 cm): " << proton_dedx -> KEFromRangeSpline(30.) << endl;
  cout << "test_p_likelihood_KE: " << test_p_likelihood_KE << endl;
  cout << "test_p_gaus_KE: " << test_p_gaus_KE << endl;
}
