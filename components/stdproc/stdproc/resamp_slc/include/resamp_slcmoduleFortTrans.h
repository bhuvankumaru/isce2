//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Copyright 2010 California Institute of Technology. ALL RIGHTS RESERVED.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
// http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// United States Government Sponsorship acknowledged. This software is subject to
// U.S. export control laws and regulations and has been classified as 'EAR99 NLR'
// (No [Export] License Required except when exporting to an embargoed country,
// end user, or in support of a prohibited end use). By downloading this software,
// the user agrees to comply with all applicable U.S. export laws and regulations.
// The user has the responsibility to obtain export licenses, or other export
// authority as may be required before exporting this software to any 'EAR99'
// embargoed foreign country or citizen of those countries.
//
// Author: Giangi Sacco
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





#ifndef resamp_slcmoduleFortTrans_h
#define resamp_slcmoduleFortTrans_h

        #if defined(NEEDS_F77_TRANSLATION)

                #if defined(F77EXTERNS_LOWERCASE_TRAILINGBAR)
                        #define resamp_slc_f resamp_slc_
                        #define setInputLines_f setinputlines_
                        #define setOutputLines_f setoutputlines_
                        #define setInputWidth_f setinputwidth_
                        #define setOutputWidth_f setoutputwidth_
                        #define setRadarWavelength_f setradarwavelength_
                        #define setReferenceWavelength_f setreferencewavelength_
                        #define setSlantRangePixelSpacing_f setslantrangepixelspacing_
                        #define setReferenceSlantRangePixelSpacing_f setreferenceslantrangepixelspacing_
                        #define setAzimuthCarrier_f setazimuthcarrier_
                        #define setRangeCarrier_f setrangecarrier_
                        #define setAzimuthOffsetsPoly_f setazimuthoffsetspoly_
                        #define setRangeOffsetsPoly_f setrangeoffsetspoly_
                        #define setDopplerPoly_f setdopplerpoly_
                        #define setIsComplex_f setiscomplex_
                        #define setMethod_f setmethod_
                        #define setFlatten_f setflatten_
                        #define setStartingRange_f setstartingrange_
                        #define setReferenceStartingRange_f setreferencestartingrange_
                #else
                        #error Unknown translation for FORTRAN external symbols
                #endif

        #endif

#endif //resamp_slcmoduleFortTrans_h
