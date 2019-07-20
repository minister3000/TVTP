// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// LogLikeliHood_FULL
Rcpp::List LogLikeliHood_FULL(Rcpp::NumericVector param, Rcpp::NumericMatrix datax, int n_explanatory, int n_transition, double prob_initial_state_0, int printLogLike);
RcppExport SEXP _TVTP_LogLikeliHood_FULL(SEXP paramSEXP, SEXP dataxSEXP, SEXP n_explanatorySEXP, SEXP n_transitionSEXP, SEXP prob_initial_state_0SEXP, SEXP printLogLikeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type param(paramSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type datax(dataxSEXP);
    Rcpp::traits::input_parameter< int >::type n_explanatory(n_explanatorySEXP);
    Rcpp::traits::input_parameter< int >::type n_transition(n_transitionSEXP);
    Rcpp::traits::input_parameter< double >::type prob_initial_state_0(prob_initial_state_0SEXP);
    Rcpp::traits::input_parameter< int >::type printLogLike(printLogLikeSEXP);
    rcpp_result_gen = Rcpp::wrap(LogLikeliHood_FULL(param, datax, n_explanatory, n_transition, prob_initial_state_0, printLogLike));
    return rcpp_result_gen;
END_RCPP
}
// LogLikeliHood
double LogLikeliHood(Rcpp::NumericVector param, Rcpp::NumericMatrix datax, int n_explanatory, int n_transition, double prob_initial_state_0, int printLogLike);
RcppExport SEXP _TVTP_LogLikeliHood(SEXP paramSEXP, SEXP dataxSEXP, SEXP n_explanatorySEXP, SEXP n_transitionSEXP, SEXP prob_initial_state_0SEXP, SEXP printLogLikeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type param(paramSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type datax(dataxSEXP);
    Rcpp::traits::input_parameter< int >::type n_explanatory(n_explanatorySEXP);
    Rcpp::traits::input_parameter< int >::type n_transition(n_transitionSEXP);
    Rcpp::traits::input_parameter< double >::type prob_initial_state_0(prob_initial_state_0SEXP);
    Rcpp::traits::input_parameter< int >::type printLogLike(printLogLikeSEXP);
    rcpp_result_gen = Rcpp::wrap(LogLikeliHood(param, datax, n_explanatory, n_transition, prob_initial_state_0, printLogLike));
    return rcpp_result_gen;
END_RCPP
}
// LogLikeliHood_byObs
Rcpp::NumericVector LogLikeliHood_byObs(Rcpp::NumericVector param, Rcpp::NumericMatrix datax, int n_explanatory, int n_transition, double prob_initial_state_0, int printLogLike);
RcppExport SEXP _TVTP_LogLikeliHood_byObs(SEXP paramSEXP, SEXP dataxSEXP, SEXP n_explanatorySEXP, SEXP n_transitionSEXP, SEXP prob_initial_state_0SEXP, SEXP printLogLikeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type param(paramSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type datax(dataxSEXP);
    Rcpp::traits::input_parameter< int >::type n_explanatory(n_explanatorySEXP);
    Rcpp::traits::input_parameter< int >::type n_transition(n_transitionSEXP);
    Rcpp::traits::input_parameter< double >::type prob_initial_state_0(prob_initial_state_0SEXP);
    Rcpp::traits::input_parameter< int >::type printLogLike(printLogLikeSEXP);
    rcpp_result_gen = Rcpp::wrap(LogLikeliHood_byObs(param, datax, n_explanatory, n_transition, prob_initial_state_0, printLogLike));
    return rcpp_result_gen;
END_RCPP
}
// LogLikeliHood_min
double LogLikeliHood_min(Rcpp::NumericVector param, Rcpp::NumericMatrix datax, int n_explanatory, int n_transition, double prob_initial_state_0, int printLogLike);
RcppExport SEXP _TVTP_LogLikeliHood_min(SEXP paramSEXP, SEXP dataxSEXP, SEXP n_explanatorySEXP, SEXP n_transitionSEXP, SEXP prob_initial_state_0SEXP, SEXP printLogLikeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type param(paramSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type datax(dataxSEXP);
    Rcpp::traits::input_parameter< int >::type n_explanatory(n_explanatorySEXP);
    Rcpp::traits::input_parameter< int >::type n_transition(n_transitionSEXP);
    Rcpp::traits::input_parameter< double >::type prob_initial_state_0(prob_initial_state_0SEXP);
    Rcpp::traits::input_parameter< int >::type printLogLike(printLogLikeSEXP);
    rcpp_result_gen = Rcpp::wrap(LogLikeliHood_min(param, datax, n_explanatory, n_transition, prob_initial_state_0, printLogLike));
    return rcpp_result_gen;
END_RCPP
}
// LogLikeliHood_RunTimeCheck
double LogLikeliHood_RunTimeCheck(Rcpp::NumericVector param, Rcpp::NumericMatrix datax, int n_explanatory, int n_transition, double prob_initial_state_0, int printLogLike, int n_it);
RcppExport SEXP _TVTP_LogLikeliHood_RunTimeCheck(SEXP paramSEXP, SEXP dataxSEXP, SEXP n_explanatorySEXP, SEXP n_transitionSEXP, SEXP prob_initial_state_0SEXP, SEXP printLogLikeSEXP, SEXP n_itSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type param(paramSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type datax(dataxSEXP);
    Rcpp::traits::input_parameter< int >::type n_explanatory(n_explanatorySEXP);
    Rcpp::traits::input_parameter< int >::type n_transition(n_transitionSEXP);
    Rcpp::traits::input_parameter< double >::type prob_initial_state_0(prob_initial_state_0SEXP);
    Rcpp::traits::input_parameter< int >::type printLogLike(printLogLikeSEXP);
    Rcpp::traits::input_parameter< int >::type n_it(n_itSEXP);
    rcpp_result_gen = Rcpp::wrap(LogLikeliHood_RunTimeCheck(param, datax, n_explanatory, n_transition, prob_initial_state_0, printLogLike, n_it));
    return rcpp_result_gen;
END_RCPP
}
// ReturnTiny
double ReturnTiny();
RcppExport SEXP _TVTP_ReturnTiny() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(ReturnTiny());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TVTP_LogLikeliHood_FULL", (DL_FUNC) &_TVTP_LogLikeliHood_FULL, 6},
    {"_TVTP_LogLikeliHood", (DL_FUNC) &_TVTP_LogLikeliHood, 6},
    {"_TVTP_LogLikeliHood_byObs", (DL_FUNC) &_TVTP_LogLikeliHood_byObs, 6},
    {"_TVTP_LogLikeliHood_min", (DL_FUNC) &_TVTP_LogLikeliHood_min, 6},
    {"_TVTP_LogLikeliHood_RunTimeCheck", (DL_FUNC) &_TVTP_LogLikeliHood_RunTimeCheck, 7},
    {"_TVTP_ReturnTiny", (DL_FUNC) &_TVTP_ReturnTiny, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_TVTP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}