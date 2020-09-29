/**
 * Copyright (c) 2019 Enzien Audio, Ltd.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the phrase "powered by heavy",
 *    the heavy logo, and a hyperlink to https://enzienaudio.com, all in a visible
 *    form.
 * 
 *   2.1 If the Application is distributed in a store system (for example,
 *       the Apple "App Store" or "Google Play"), the phrase "powered by heavy"
 *       shall be included in the app description or the copyright text as well as
 *       the in the app itself. The heavy logo will shall be visible in the app
 *       itself as well.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#ifndef _HEAVY_VST2_EPMK_
#define _HEAVY_VST2_EPMK_

#include "vst2/audioeffectx.h"
#include "Heavy_epmk.hpp"

class HeavyVst2_epmk : public AudioEffectX {
 public:
  HeavyVst2_epmk(audioMasterCallback amCallback);
  ~HeavyVst2_epmk();

  void setSampleRate(float sampleRate) override;

  void setParameter(VstInt32 index, float value) override;
  float getParameter(VstInt32 index) override;

  void getParameterDisplay(VstInt32 index, char* text) override;
  void getParameterName(VstInt32 index, char* text) override;
  bool string2parameter(VstInt32 index, char* text) override;

  VstInt32 canDo(char *text) override;

  void processReplacing(float** inputs, float** outputs, VstInt32 sampleFrames) override;

  VstInt32 processEvents(VstEvents* events) override;

  bool getEffectName(char* name) override;
  bool getVendorString(char* text) override;

  VstInt32 getChunk(void** data, bool isPreset) override;
  VstInt32 setChunk(void* data, VstInt32 byteSize, bool isPreset) override;

 private:

  // heavy context
  HeavyContextInterface *_context;
};

#endif // _HEAVY_VST2_EPMK_
