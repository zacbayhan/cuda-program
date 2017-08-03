# cuda-program

[![Build Status](https://travis-ci.org/zacbayhan/cuda-program.svg?branch=master)](https://travis-ci.org/zacbayhan/cuda-program)


A content recommendation algorithm which will leverage parallel computing by means of cu-blas, and dblas


Abstract 

Collaborative filtering (CF) approaches proved to be effec-
tive for recommender systems in predicting user preferences
in item selection using known user ratings of items. This
subfield of machine learning has gained a lot of popularity
with the Netflix Prize competition started in October 2006.
Two major approaches for this problem are matrix factor-
ization (MF) and the neighbor based approach (NB). In this
work, we propose various variants of MF and NB that can
boost the performance of the usual ensemble based scheme.
First, we investigate various regularization scenarios for MF.
Second, we introduce two NB methods: one is based on cor-
relation coefficients and the other on linear least squares.
At the experimentation part, we show that the proposed
approaches compare favorably with existing ones in terms
of prediction accuracy and/or required training time. We
present results of blending the proposed methods.
