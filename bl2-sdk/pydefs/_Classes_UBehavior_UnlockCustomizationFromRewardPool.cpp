#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockCustomizationFromRewardPool(py::module &m)
{
    py::class_< UBehavior_UnlockCustomizationFromRewardPool,  UBehaviorBase   >(m, "UBehavior_UnlockCustomizationFromRewardPool")
        .def_readwrite("RewardItemPool", &UBehavior_UnlockCustomizationFromRewardPool::RewardItemPool)
        .def("ApplyBehaviorToContext", &UBehavior_UnlockCustomizationFromRewardPool::ApplyBehaviorToContext)
          ;
}