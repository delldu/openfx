/* 
 Copyright (C) 2013 INRIA
 Author Alexandre Gauthier-Foichat alexandre.gauthier-foichat@inria.fr
 
 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:
 
 Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 
 Redistributions in binary form must reproduce the above copyright notice, this
 list of conditions and the following disclaimer in the documentation and/or
 other materials provided with the distribution.
 
 Neither the name of the {organization} nor the names of its
 contributors may be used to endorse or promote products derived from
 this software without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
 INRIA
 Domaine de Voluceau
 Rocquencourt - B.P. 105
 78153 Le Chesnay Cedex - France
 
 */

/**
@brief Indicates what file formats a decoder/encoder can handle.
 - Type - string X N
 - Property Set - image effect instance (read-write)
 - Valid Values - Any image or video file format extension
    e.g: "jpg" , "png", "avi", etc...
 **/
#define kOfxImageEffectPropFormats "OfxImageEffectPropFormats"

/**
 @brief Indicates how many strings are contained in kOfxImageEffectPropFormats
 - Type - int X 1
 - Property Set - image effect instance (read-write)
 - Default - 0.
 - Valid Values - Any value >= 0.
 **/
#define kOfxImageEffectPropFormatsCount "OfxImageEffectPropFormatsCount"

/**
 @brief Indicates for a string parameter that has the property kOfxParamPropStringMode set to kOfxParamStringIsFilePath
 whether the file is an image/video file. For image readers, it indicates the input images files whereas for image writers
 , it indicates the output images files.
 - Type - int X 1
 - Property Set - plugin string parameter descriptor (read/write) and instance (read only)
 - Valid Values:
    - 0 : The file path is not an image path.
    - 1 : The file path is an image path.
 - Default value - 0
 
 **/
#define kOfxParamFilePathIsImage "OfxParamFilePathIsImage"

