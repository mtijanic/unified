#pragma once
#include "nwn_api.hpp"

#include "CGuiFnX.hpp"
#include "CGuiCallbackBase.hpp"


#ifdef NWN_API_PROLOGUE
NWN_API_PROLOGUE(CGuiCallbackr3)
#endif





template <class tReturn, class tParam0, class tParam1, class tParam2> struct CGuiCallbackr3 : CGuiCallbackBase
{
    CGuiFnX m_pfnHandlerFunction;



#ifdef NWN_CLASS_EXTENSION_CGuiCallbackr3
    NWN_CLASS_EXTENSION_CGuiCallbackr3
#endif
};


#ifdef NWN_API_EPILOGUE
NWN_API_EPILOGUE(CGuiCallbackr3)
#endif

