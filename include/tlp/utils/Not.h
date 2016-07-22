#ifndef H37D127DF_B5A3_4DA6_A073_10FC6E8D7B45
#define H37D127DF_B5A3_4DA6_A073_10FC6E8D7B45

#include <tlp/tlp.h>

TLP_NS_BEGIN

template<template<typename T> class Pred>
struct Not
{
    template<typename U>
    struct Result
    {
        enum { Value = !Pred<U>::Value };
    };
};

TLP_NS_END

#endif
