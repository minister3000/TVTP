\name{LogLikeliHood_FULL}
\alias{LogLikeliHood_FULL}
\title{EM-ML Log-Likelihood}
\usage{
LogLikeliHood_FULL()
}
\description{
Fast \code{c++} implementation that returns a numeric scalar \code{c(0)} with the log-likelihood of the Expectation-Maximization Maximum-Likelihood (EM-ML) algorithm given observations for the explanatory variables governing direct effects on the the dependent variable and observations for explanatory variables that govern the regime transition process. This implemenation is several thousand times faster compared to the \R analog.
}
\examples{
LogLikeliHood_FULL()
}
