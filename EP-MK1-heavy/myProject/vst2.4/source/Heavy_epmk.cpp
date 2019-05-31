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

#include "Heavy_epmk.hpp"

#define Context(_c) reinterpret_cast<Heavy_epmk *>(_c)



/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_epmk_new(double sampleRate) {
    return new Heavy_epmk(sampleRate);
  }

  HV_EXPORT HeavyContextInterface *hv_epmk_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    return new Heavy_epmk(sampleRate, poolKb, inQueueKb, outQueueKb);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_epmk::Heavy_epmk(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sRPole_init(&sRPole_y4jlB8r5);
  numBytes += sPhasor_k_init(&sPhasor_JDXqhQVq, 0.0f, sampleRate);
  numBytes += sRPole_init(&sRPole_ERmV1L7C);
  numBytes += sLine_init(&sLine_hGKcjT7r);
  numBytes += sLine_init(&sLine_VmNJ3HwZ);
  numBytes += sBiquad_init(&sBiquad_s_stpO4Zxn);
  numBytes += sBiquad_init(&sBiquad_s_WeHJoxYj);
  numBytes += sRPole_init(&sRPole_yUplkRd5);
  numBytes += sPhasor_k_init(&sPhasor_r6MaoSfR, 0.0f, sampleRate);
  numBytes += sRPole_init(&sRPole_m2Phse3a);
  numBytes += sLine_init(&sLine_uVpc7R6U);
  numBytes += sLine_init(&sLine_9vruFHkq);
  numBytes += sBiquad_init(&sBiquad_s_nSj554IE);
  numBytes += sBiquad_init(&sBiquad_s_hoo2mpF8);
  numBytes += sRPole_init(&sRPole_BeXUigXW);
  numBytes += sPhasor_k_init(&sPhasor_cEnzzTRl, 0.0f, sampleRate);
  numBytes += sRPole_init(&sRPole_r4NhOlRJ);
  numBytes += sLine_init(&sLine_Gi8YR2TJ);
  numBytes += sLine_init(&sLine_LEGR74Q9);
  numBytes += sBiquad_init(&sBiquad_s_frFtrT0e);
  numBytes += sBiquad_init(&sBiquad_s_0ZvPLDpt);
  numBytes += sRPole_init(&sRPole_xWgX2lDM);
  numBytes += sPhasor_k_init(&sPhasor_2iTGWCHV, 0.0f, sampleRate);
  numBytes += sRPole_init(&sRPole_BgN0lBhn);
  numBytes += sLine_init(&sLine_94c2rnXF);
  numBytes += sLine_init(&sLine_NMd3bLgd);
  numBytes += sBiquad_init(&sBiquad_s_61OtIY4g);
  numBytes += sBiquad_init(&sBiquad_s_qpT5waGq);
  numBytes += sRPole_init(&sRPole_S7rEDO2g);
  numBytes += sPhasor_k_init(&sPhasor_Yh6BnmRO, 0.0f, sampleRate);
  numBytes += sRPole_init(&sRPole_FtDZFTsc);
  numBytes += sLine_init(&sLine_3P4petKB);
  numBytes += sLine_init(&sLine_7HspNWeE);
  numBytes += sBiquad_init(&sBiquad_s_fr6dMrxf);
  numBytes += sBiquad_init(&sBiquad_s_GxkpGxnj);
  numBytes += sRPole_init(&sRPole_f73rxvwt);
  numBytes += sPhasor_k_init(&sPhasor_jVNG1Weq, 0.0f, sampleRate);
  numBytes += sRPole_init(&sRPole_CeRpPfsL);
  numBytes += sLine_init(&sLine_H8MWG43z);
  numBytes += sLine_init(&sLine_QSrMd8di);
  numBytes += sBiquad_init(&sBiquad_s_xUZlOHWk);
  numBytes += sBiquad_init(&sBiquad_s_WpkmdToz);
  numBytes += sRPole_init(&sRPole_jOzfV90i);
  numBytes += sPhasor_k_init(&sPhasor_cABduJ25, 0.0f, sampleRate);
  numBytes += sRPole_init(&sRPole_FFQfKN0R);
  numBytes += sLine_init(&sLine_vRXrCX88);
  numBytes += sLine_init(&sLine_pE8HM6eJ);
  numBytes += sBiquad_init(&sBiquad_s_UMFbjyN4);
  numBytes += sBiquad_init(&sBiquad_s_MGLVvw8p);
  numBytes += sRPole_init(&sRPole_rDQCcsks);
  numBytes += sPhasor_k_init(&sPhasor_RgB7pHdJ, 0.0f, sampleRate);
  numBytes += sRPole_init(&sRPole_eSt3TrFR);
  numBytes += sLine_init(&sLine_zJ57bCVQ);
  numBytes += sLine_init(&sLine_dRgh5hWp);
  numBytes += sBiquad_init(&sBiquad_s_wXglfVU3);
  numBytes += sBiquad_init(&sBiquad_s_SuTj3QdB);
  numBytes += sRPole_init(&sRPole_Ji8SrxsK);
  numBytes += sDel1_init(&sDel1_BdXhZ9nQ);
  numBytes += cSlice_init(&cSlice_vP86MQEP, 2, 1);
  numBytes += cSlice_init(&cSlice_kdHaZ4Xl, 0, 1);
  numBytes += cSlice_init(&cSlice_hRmG4Zpu, 1, 1);
  numBytes += cSlice_init(&cSlice_sPeQ6Iev, 1, -1);
  numBytes += cSlice_init(&cSlice_BCIJLsgj, 1, -1);
  numBytes += cDelay_init(this, &cDelay_uC1zErwX, 2.0f);
  numBytes += sVarf_init(&sVarf_ULEXtwvp, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_Q8JuVswo, 3.0f);
  numBytes += cPack_init(&cPack_6GMLy0Yf, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_hRga1sRh, 2.0f);
  numBytes += sVarf_init(&sVarf_hhnJelk6, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8xRFsorC, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Wzdz5YYY, 44100.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_KBe2MDKf, 3.0f);
  numBytes += cBinop_init(&cBinop_tuZtUI6X, 2048.0f); // __mul
  numBytes += cBinop_init(&cBinop_AlekmWSU, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_HwQjMaSb, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_boi8ORcx, 22050.0f);
  numBytes += sVarf_init(&sVarf_jX08Ccs3, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_Mo08ka5l, 1.0f); // __pow
  numBytes += cSlice_init(&cSlice_wqKQLYq0, 1, 1);
  numBytes += cSlice_init(&cSlice_yBwHq4QE, 0, 1);
  numBytes += cPack_init(&cPack_Tt6QFMlh, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_oDMfRf9T, 3.0f);
  numBytes += cIf_init(&cIf_FajDBHZy, false);
  numBytes += cBinop_init(&cBinop_PxZ6MZn7, 0.0f); // __pow
  numBytes += cVar_init_f(&cVar_w4FPwqDt, 22050.0f);
  numBytes += cBinop_init(&cBinop_jv61Vp8C, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_xcXCOi6K, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_IJfyM2us, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WaXArmjW, -1.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_7AxHFT0w, 1.0f); // __pow
  numBytes += cPack_init(&cPack_NMCe51U3, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_Re1ysKlj, 3.0f);
  numBytes += sVarf_init(&sVarf_uuzYHu3R, 44100.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8BqLfaLW, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_2VUt8K82, 3.0f);
  numBytes += cSlice_init(&cSlice_GqMXX6IW, 1, -1);
  numBytes += cSlice_init(&cSlice_Pm9JLfLs, 1, -1);
  numBytes += cSlice_init(&cSlice_OUgEFKK3, 0, 1);
  numBytes += cSlice_init(&cSlice_6La5XOFv, 1, 1);
  numBytes += cSlice_init(&cSlice_KSFCHYdd, 0, 1);
  numBytes += cSlice_init(&cSlice_jt9VwSq5, 1, 1);
  numBytes += cDelay_init(this, &cDelay_AvkRm3ac, 2.0f);
  numBytes += cSlice_init(&cSlice_YMQGOJcU, 1, -1);
  numBytes += cSlice_init(&cSlice_JXaDjkIZ, 1, -1);
  numBytes += cDelay_init(this, &cDelay_PjvtB6QK, 3.0f);
  numBytes += sVarf_init(&sVarf_P5OyvDsd, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_gehgD4Pu, 22050.0f);
  numBytes += sVarf_init(&sVarf_sYUgoI3m, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_AECNtNPm, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_RvHVp2CH, 3.0f);
  numBytes += cDelay_init(this, &cDelay_1wXZNaRa, 2.0f);
  numBytes += cBinop_init(&cBinop_p2HmQSEA, 2048.0f); // __mul
  numBytes += sVarf_init(&sVarf_79qi5uOc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_t7PegvxC, -1.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_Yq3ClBDr, 2.0f);
  numBytes += cDelay_init(this, &cDelay_HSRN0604, 3.0f);
  numBytes += sVarf_init(&sVarf_eVDEFIxw, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_eswYpKSo, 0, 1);
  numBytes += cSlice_init(&cSlice_i8mSwgCh, 1, 1);
  numBytes += cSlice_init(&cSlice_gHXpmnnf, 1, -1);
  numBytes += cSlice_init(&cSlice_laZMmqNy, 1, -1);
  numBytes += cBinop_init(&cBinop_Xk7JEKrV, 1.0f); // __pow
  numBytes += sVarf_init(&sVarf_CfalTCcj, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_keKCiVOg, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_rxI3xAWv, 1.0f); // __pow
  numBytes += cPack_init(&cPack_PzQv3Glk, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_Zu0SSk53, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_1BF7sQxY, 44100.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_UEx14s2I, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_3Fn26u93, 1, 1);
  numBytes += cSlice_init(&cSlice_F6vvsfkO, 0, 1);
  numBytes += cBinop_init(&cBinop_RYvqEiMV, 0.0f); // __pow
  numBytes += cIf_init(&cIf_0SSTJuV5, false);
  numBytes += cDelay_init(this, &cDelay_l7cUr5Ag, 3.0f);
  numBytes += cVar_init_f(&cVar_H8QR8Ihu, 22050.0f);
  numBytes += sVarf_init(&sVarf_dBRA10fL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Nua1l6af, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_kyv9edTE, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_xyC5Ikvg, 44100.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_otLzeeNS, 1, 1);
  numBytes += cSlice_init(&cSlice_ucasbZQv, 0, 1);
  numBytes += cDelay_init(this, &cDelay_1iPnSjpU, 3.0f);
  numBytes += cDelay_init(this, &cDelay_2k3wkh2H, 2.0f);
  numBytes += cPack_init(&cPack_eJSMizEh, 3, 0.0f, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_j5okvBiY, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_uVInNTaE, 22050.0f);
  numBytes += sVarf_init(&sVarf_x32YE819, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_g6mUgCcE, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_qXPvmCl8, 3.0f);
  numBytes += sVarf_init(&sVarf_Rz3kZvOT, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_kpqBw9hw, 2.0f);
  numBytes += cDelay_init(this, &cDelay_T2f1i12W, 2.0f);
  numBytes += cBinop_init(&cBinop_c2GllO0T, 2048.0f); // __mul
  numBytes += cSlice_init(&cSlice_wTQp5t0g, 1, -1);
  numBytes += cSlice_init(&cSlice_9N7UrA3j, 1, -1);
  numBytes += cDelay_init(this, &cDelay_6WKKdTIS, 3.0f);
  numBytes += cDelay_init(this, &cDelay_AXHqiQC8, 2.0f);
  numBytes += sVarf_init(&sVarf_eT6qixFO, -1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CgiMPPpD, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_HJFwWTRW, 0, 1);
  numBytes += cSlice_init(&cSlice_SyKUbcGp, 1, 1);
  numBytes += cBinop_init(&cBinop_o0pKcFnQ, 0.0f); // __pow
  numBytes += cIf_init(&cIf_zfivC5eR, false);
  numBytes += cDelay_init(this, &cDelay_bZHAkciX, 3.0f);
  numBytes += sVarf_init(&sVarf_ANyncv8H, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_jZjzFa8P, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_jRxwGNjG, 22050.0f);
  numBytes += sVarf_init(&sVarf_6oBVCur5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_73fO1cEi, 44100.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Ur4adPC4, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_Fk6HKDah, 3.0f);
  numBytes += cBinop_init(&cBinop_FaN7pKtk, 1.0f); // __pow
  numBytes += cBinop_init(&cBinop_2EzODc4o, 1.0f); // __pow
  numBytes += cPack_init(&cPack_MQvPWJpb, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_u3uK0HQJ, 44100.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_hVdhzN7A, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_dDlQufKU, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_w41e5ZU9, 3.0f);
  numBytes += cSlice_init(&cSlice_BmvIEvyx, 0, 1);
  numBytes += cSlice_init(&cSlice_B1pAf17F, 1, 1);
  numBytes += cPack_init(&cPack_19h6Yiyg, 2, 0.0f, 0.0f);
  numBytes += cSlice_init(&cSlice_8KBLo4y8, 1, 1);
  numBytes += cSlice_init(&cSlice_6WuVud0W, 0, 1);
  numBytes += cSlice_init(&cSlice_kYDkIfCo, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_3gLfqDQ8, &hTable_wf984nPp); // 1137-used
  numBytes += cSlice_init(&cSlice_gM8nF4KN, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_jX0ct55x, &hTable_GJ7cS7QV); // 1137-pitches
  numBytes += cVar_init_f(&cVar_FsD1PrOT, 8.0f);
  numBytes += cIf_init(&cIf_fYq9mhFg, false);
  numBytes += cVar_init_f(&cVar_eqyBYeZl, 0.0f);
  numBytes += cIf_init(&cIf_fjvo9cC7, false);
  numBytes += cVar_init_f(&cVar_R89WfgPB, 0.0f);
  numBytes += cBinop_init(&cBinop_SXUL47nj, 0.0f); // __lt
  numBytes += cIf_init(&cIf_VwpV3TkG, false);
  numBytes += cSlice_init(&cSlice_laTRehu2, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_KSQkytqy, &hTable_xRdJ46as); // 1137-ids
  numBytes += cTabwrite_init(&cTabwrite_IRNQbArb, &hTable_GJ7cS7QV); // 1137-pitches
  numBytes += cSlice_init(&cSlice_2qK2NXbV, 1, -1);
  numBytes += cVar_init_f(&cVar_W1YpIYeO, 0.0f);
  numBytes += cVar_init_f(&cVar_VM13ldWN, 0.0f);
  numBytes += cSlice_init(&cSlice_kifF3ecj, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_E4ZQss4p, &hTable_xRdJ46as); // 1137-ids
  numBytes += cSlice_init(&cSlice_luNuWwnV, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_0juDVZzh, &hTable_wf984nPp); // 1137-used
  numBytes += cSlice_init(&cSlice_ac4EMDrd, 1, -1);
  numBytes += cVar_init_s(&cVar_K5n7fUK4, "1137-pitches");
  numBytes += cBinop_init(&cBinop_EPLJxiUf, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_HUWuaSPD, &hTable_GJ7cS7QV); // 1137-pitches
  numBytes += cBinop_init(&cBinop_Li179nCX, 0.0f); // __lt
  numBytes += cIf_init(&cIf_mdzOwEp9, false);
  numBytes += cTabwrite_init(&cTabwrite_YWzWBFPc, &hTable_xRdJ46as); // 1137-ids
  numBytes += cSlice_init(&cSlice_5kQ3z6kK, 1, -1);
  numBytes += cBinop_init(&cBinop_Q6OMV9Yw, 0.0f); // __logand
  numBytes += cVar_init_f(&cVar_EXPNJXz8, 0.0f);
  numBytes += cVar_init_f(&cVar_D24uY3oj, 0.0f);
  numBytes += cSlice_init(&cSlice_5Tr3cjND, 0, 1);
  numBytes += cSlice_init(&cSlice_ZqE5vnDi, 1, 1);
  numBytes += cBinop_init(&cBinop_cK7rDEgg, 0.0f); // __lt
  numBytes += cVar_init_f(&cVar_sswKgrub, 0.0f);
  numBytes += cVar_init_f(&cVar_VLIoMt2W, 0.0f);
  numBytes += cIf_init(&cIf_4tUonJFw, false);
  numBytes += cPack_init(&cPack_fBmId62d, 2, 0.0f, 0.0f);
  numBytes += cIf_init(&cIf_fI0sGWGB, false);
  numBytes += cVar_init_f(&cVar_2KLTNhn0, 0.0f);
  numBytes += cVar_init_f(&cVar_Io7EPZhf, 8.0f);
  numBytes += cVar_init_f(&cVar_ujKZaCpx, 0.0f);
  numBytes += cVar_init_f(&cVar_Jug2qN9Z, 0.0f);
  numBytes += cSlice_init(&cSlice_88D9VjXX, 0, 1);
  numBytes += cSlice_init(&cSlice_RwWd4GhU, 1, 1);
  numBytes += cBinop_init(&cBinop_mKqCyxeB, 0.0f); // __logand
  numBytes += cSlice_init(&cSlice_XelgS5r3, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_RQaPyvvw, &hTable_GJ7cS7QV); // 1137-pitches
  numBytes += cVar_init_f(&cVar_TKYqklJN, 0.0f);
  numBytes += cIf_init(&cIf_LGWXrlPv, false);
  numBytes += cBinop_init(&cBinop_pHGF1joO, 0.0f); // __lt
  numBytes += cVar_init_f(&cVar_gtxTaEbh, 0.0f);
  numBytes += cIf_init(&cIf_7WpDhu1k, false);
  numBytes += cIf_init(&cIf_NYbIOwzz, false);
  numBytes += cTabread_init(&cTabread_HnXOj8Iv, &hTable_xRdJ46as); // 1137-ids
  numBytes += cBinop_init(&cBinop_tMg5guof, 0.0f); // __min
  numBytes += cSlice_init(&cSlice_zBBmcUoN, 1, -1);
  numBytes += cVar_init_s(&cVar_oK39szYQ, "1137-ids");
  numBytes += cVar_init_f(&cVar_BDQ2M9VC, 0.0f);
  numBytes += cVar_init_f(&cVar_ppWyP3eX, 0.0f);
  numBytes += cBinop_init(&cBinop_zXbQjrix, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_PCrHz9yA, &hTable_wf984nPp); // 1137-used
  numBytes += cSlice_init(&cSlice_99VKPOLC, 1, -1);
  numBytes += cVar_init_s(&cVar_4Tw40AIy, "1137-used");
  numBytes += cBinop_init(&cBinop_Wqs3mRab, 0.0f); // __logand
  numBytes += cTabwrite_init(&cTabwrite_L80fXeGl, &hTable_wf984nPp); // 1137-used
  numBytes += cSlice_init(&cSlice_PLQptpRv, 1, -1);
  numBytes += cIf_init(&cIf_PJrfts5l, false);
  numBytes += cSlice_init(&cSlice_Wmsn1lf7, 0, 1);
  numBytes += cSlice_init(&cSlice_nWva1lel, 1, 1);
  numBytes += cVar_init_f(&cVar_vUb3kKKI, 0.0f);
  numBytes += cPack_init(&cPack_Sfa3Ypdb, 2, 0.0f, 0.0f);
  numBytes += cVar_init_f(&cVar_t4MumeSy, 0.0f);
  numBytes += cBinop_init(&cBinop_eo0tjb1e, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_cKN3Xqq7, &hTable_GJ7cS7QV); // 1137-pitches
  numBytes += cVar_init_s(&cVar_bjRrOIXg, "1137-pitches");
  numBytes += cSlice_init(&cSlice_otuPd9J1, 1, -1);
  numBytes += cVar_init_f(&cVar_rM8dNEYK, 0.0f);
  numBytes += cIf_init(&cIf_nuuHnV1Y, false);
  numBytes += cBinop_init(&cBinop_GryMUfWU, 0.0f); // __lt
  numBytes += cSlice_init(&cSlice_PEXMXpkx, 1, 1);
  numBytes += cSlice_init(&cSlice_kMUNXyoO, 0, 1);
  numBytes += cVar_init_f(&cVar_7zq5ceyZ, 0.0f);
  numBytes += cSlice_init(&cSlice_1s6ZG876, 1, 1);
  numBytes += cSlice_init(&cSlice_hQfbQkBu, 0, 1);
  numBytes += cIf_init(&cIf_406yCcLV, false);
  numBytes += cVar_init_f(&cVar_x404jybq, 0.0f);
  numBytes += cIf_init(&cIf_iJ2Eh06S, false);
  numBytes += cBinop_init(&cBinop_ix3MR3m9, 0.0f); // __lt
  numBytes += cIf_init(&cIf_DfIaFEHG, false);
  numBytes += cVar_init_f(&cVar_YX5AwNmN, 0.0f);
  numBytes += cVar_init_f(&cVar_Il830noy, 8.0f);
  numBytes += cBinop_init(&cBinop_DQBNQxUV, 0.0f); // __logand
  numBytes += cBinop_init(&cBinop_MDWAWfLC, 0.0f); // __eq
  numBytes += cBinop_init(&cBinop_wLkxhy4t, 0.0f); // __logand
  numBytes += cBinop_init(&cBinop_6shUWfeK, 0.0f); // __min
  numBytes += cVar_init_s(&cVar_xdHEcu8b, "1137-used");
  numBytes += cTabread_init(&cTabread_IwQxvmku, &hTable_wf984nPp); // 1137-used
  numBytes += cSlice_init(&cSlice_P3USefwH, 1, -1);
  numBytes += cSlice_init(&cSlice_VZjy4quG, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_sYmf35zl, &hTable_wf984nPp); // 1137-used
  numBytes += cTabwrite_init(&cTabwrite_8mQi3qrD, &hTable_xRdJ46as); // 1137-ids
  numBytes += cSlice_init(&cSlice_69tEP9M3, 1, -1);
  numBytes += cVar_init_s(&cVar_u6KK5Vyl, "1137-ids");
  numBytes += cTabread_init(&cTabread_3WpnCrCj, &hTable_xRdJ46as); // 1137-ids
  numBytes += cSlice_init(&cSlice_5SfGkucC, 1, -1);
  numBytes += cBinop_init(&cBinop_OjKpOVyn, 0.0f); // __min
  numBytes += cVar_init_f(&cVar_fItqfZHl, 0.0f);
  numBytes += cSlice_init(&cSlice_wozekyNv, 1, -1);
  numBytes += cSlice_init(&cSlice_FDR410bo, 1, -1);
  numBytes += hTable_init(&hTable_GJ7cS7QV, 8);
  numBytes += cBinop_init(&cBinop_t2Rl5Ell, 65535.0f); // __unimod
  numBytes += cIf_init(&cIf_nSWOAlC5, false);
  numBytes += cVar_init_f(&cVar_Uphj5t3l, 0.0f);
  numBytes += hTable_init(&hTable_xRdJ46as, 8);
  numBytes += cVar_init_f(&cVar_fYBjXPXT, 0.0f);
  numBytes += cSlice_init(&cSlice_an6hAxbf, 1, -1);
  numBytes += cVar_init_s(&cVar_JZ9BIwZH, "1137-pitches");
  numBytes += cTabread_init(&cTabread_9FUPq3MS, &hTable_GJ7cS7QV); // 1137-pitches
  numBytes += cBinop_init(&cBinop_2VM8dVgS, 0.0f); // __min
  numBytes += cBinop_init(&cBinop_uKMdvjzk, 0.0f); // __min
  numBytes += cVar_init_s(&cVar_fb668yC5, "1137-used");
  numBytes += cTabread_init(&cTabread_ZZMgtfTn, &hTable_wf984nPp); // 1137-used
  numBytes += cSlice_init(&cSlice_7V2787w3, 1, -1);
  numBytes += cIf_init(&cIf_Fu0j82lf, false);
  numBytes += cVar_init_f(&cVar_USDnH1Lg, 0.0f);
  numBytes += cIf_init(&cIf_l4f43Mrn, false);
  numBytes += cBinop_init(&cBinop_AObPYw95, 0.0f); // __lt
  numBytes += cVar_init_f(&cVar_rR8aKOSl, 0.0f);
  numBytes += cIf_init(&cIf_kMQfEkg1, false);
  numBytes += cIf_init(&cIf_FvyA74ZQ, false);
  numBytes += cVar_init_f(&cVar_gtY0wCII, 8.0f);
  numBytes += cSlice_init(&cSlice_JcOW5NXo, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_CmEM0VeY, &hTable_wf984nPp); // 1137-used
  numBytes += hTable_init(&hTable_wf984nPp, 8);
  numBytes += cIf_init(&cIf_ymkkBIIq, false);
  numBytes += cVar_init_f(&cVar_xqCWpGCM, 1.0f);
  numBytes += cBinop_init(&cBinop_viMSxIAM, 1.0f); // __pow
  numBytes += cDelay_init(this, &cDelay_SQ7L0q00, 3.0f);
  numBytes += cPack_init(&cPack_Uutd3Jvu, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_pR90ZDCP, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_DS0S3jjG, 2048.0f); // __mul
  numBytes += sVarf_init(&sVarf_XaDCaID4, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_bBHw7djf, 3.0f);
  numBytes += cSlice_init(&cSlice_RHOPc1Rl, 1, 1);
  numBytes += cSlice_init(&cSlice_PTQdF5Cc, 0, 1);
  numBytes += cBinop_init(&cBinop_UquZ6ERU, 0.0f); // __pow
  numBytes += cIf_init(&cIf_qab7oHpm, false);
  numBytes += cPack_init(&cPack_MtPSQZPT, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_jSYRcpmm, 44100.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_dxoKXZrP, 3.0f);
  numBytes += sVarf_init(&sVarf_ncKKB3NR, -1.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_CFRs6906, 3.0f);
  numBytes += cBinop_init(&cBinop_tMSVCSKv, 1.0f); // __pow
  numBytes += cDelay_init(this, &cDelay_lU6Y2uJ5, 2.0f);
  numBytes += sVarf_init(&sVarf_M8SHGKY9, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_JiR4EoAl, 0, 1);
  numBytes += cSlice_init(&cSlice_Zv9HHj5p, 1, 1);
  numBytes += cBinop_init(&cBinop_H7t1McKx, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_xJGitJ0K, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_yQMexrae, 22050.0f);
  numBytes += sVarf_init(&sVarf_bguGqCmV, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_W9Gi37CH, 0, 1);
  numBytes += cSlice_init(&cSlice_9sk9BPoc, 1, 1);
  numBytes += sVarf_init(&sVarf_euAj5M4f, 44100.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_8xX71lVk, 2.0f);
  numBytes += cSlice_init(&cSlice_8dhTOXoJ, 1, -1);
  numBytes += cSlice_init(&cSlice_h8NRnQ5f, 1, -1);
  numBytes += sVarf_init(&sVarf_764z0Jl6, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_IhkoKzWe, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_zCrFWpBp, 22050.0f);
  numBytes += cBinop_init(&cBinop_Ifaa5WD7, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_Vecj9a2Y, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_UjX5JuhO, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_XPRP1Ss2, 2.0f);
  numBytes += cDelay_init(this, &cDelay_8OB7YwrF, 3.0f);
  numBytes += cSlice_init(&cSlice_FykAxBxn, 1, -1);
  numBytes += cSlice_init(&cSlice_YzkaQmL7, 1, -1);
  numBytes += cDelay_init(this, &cDelay_46yfNsDK, 3.0f);
  numBytes += sVarf_init(&sVarf_He7BfjGj, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_ACUmKHWE, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_mwAoAELZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_M02YIJJ3, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_5SBP51i2, 22050.0f);
  numBytes += sVarf_init(&sVarf_myaMYuBU, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_WRhJjbFK, 1, 1);
  numBytes += cSlice_init(&cSlice_doCNcPW6, 0, 1);
  numBytes += cBinop_init(&cBinop_D2bvA1TZ, 1.0f); // __pow
  numBytes += cBinop_init(&cBinop_fhT7RVqX, 1.0f); // __pow
  numBytes += cBinop_init(&cBinop_7FXdSrws, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_vnM2GfIV, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_X2Lfk4Gv, 22050.0f);
  numBytes += sVarf_init(&sVarf_hwjjwIAe, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_RIKOkelr, 2.0f);
  numBytes += sVarf_init(&sVarf_F2Fkra67, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_haNz4gC8, 3.0f);
  numBytes += cBinop_init(&cBinop_v6YfBjgr, 2048.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_LY8mohhO, 3.0f);
  numBytes += sVarf_init(&sVarf_XOBMDNnv, -1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ynMMAGA3, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_ucfJertk, 3.0f);
  numBytes += cPack_init(&cPack_TVhYke5E, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_sBfdQmam, 3.0f);
  numBytes += cSlice_init(&cSlice_WkvTCDax, 1, -1);
  numBytes += cSlice_init(&cSlice_Tv9HtyQT, 1, -1);
  numBytes += cSlice_init(&cSlice_lXXyNwwZ, 0, 1);
  numBytes += cSlice_init(&cSlice_LbU9nL2y, 1, 1);
  numBytes += cPack_init(&cPack_I7mtl1jZ, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_VioDJkD5, 44100.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_anxjdzZ0, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_X5qFEIvw, 2.0f);
  numBytes += cDelay_init(this, &cDelay_EAiTNVgo, 2.0f);
  numBytes += cIf_init(&cIf_TWFxFOJ2, false);
  numBytes += cBinop_init(&cBinop_V0LAde94, 0.0f); // __pow
  numBytes += cSlice_init(&cSlice_5RY6wqfc, 0, 1);
  numBytes += cSlice_init(&cSlice_rsQ08RHJ, 1, 1);
  numBytes += sVarf_init(&sVarf_fKudiXxA, 44100.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_udHK9mGt, 1, 1);
  numBytes += cSlice_init(&cSlice_3zwqB2iU, 0, 1);
  numBytes += cDelay_init(this, &cDelay_Y1m3Wvo2, 3.0f);
  numBytes += sVarf_init(&sVarf_O2sEpa3M, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_jBuj356V, 22050.0f);
  numBytes += cBinop_init(&cBinop_4QxiBDPL, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_h34a9dd9, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_7ejTS4xf, 2.0f);
  numBytes += cBinop_init(&cBinop_IsbWCTUJ, 1.0f); // __pow
  numBytes += sVarf_init(&sVarf_JdZyqtot, 44100.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_B0G52ltq, 3.0f);
  numBytes += sVarf_init(&sVarf_avZpiXPU, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_YcsVXsYj, 1, 1);
  numBytes += cSlice_init(&cSlice_HAMvI6cM, 0, 1);
  numBytes += cSlice_init(&cSlice_BDGdRGr0, 1, -1);
  numBytes += cSlice_init(&cSlice_E50Mklh8, 1, -1);
  numBytes += cDelay_init(this, &cDelay_1sv3YDZi, 3.0f);
  numBytes += cBinop_init(&cBinop_jheLMLUP, 2048.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_Ayf4iWpp, 2.0f);
  numBytes += cIf_init(&cIf_6Mm2MKXc, false);
  numBytes += cBinop_init(&cBinop_d0bR2OkN, 0.0f); // __pow
  numBytes += sVarf_init(&sVarf_PN3xxJ2Y, 44100.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Yb11eBXB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_tbSNPr5E, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_ODeAQJp5, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_1NxvoTUo, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_dvvQLlOg, -1.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_M7NMcNCz, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_VRAZwqUA, 2.0f);
  numBytes += cBinop_init(&cBinop_6POzTdS4, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_l2EbGRHa, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_x3iQ9qJN, 22050.0f);
  numBytes += sVarf_init(&sVarf_nu8YY4hF, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_tzKeJWEB, 3.0f);
  numBytes += cDelay_init(this, &cDelay_VFgbRo1S, 3.0f);
  numBytes += cPack_init(&cPack_Udryqu6f, 2, 0.0f, 0.0f);
  numBytes += cBinop_init(&cBinop_DqC9788v, 1.0f); // __pow
  numBytes += cSlice_init(&cSlice_3lHGpSYF, 1, 1);
  numBytes += cSlice_init(&cSlice_Qn4LNaIZ, 0, 1);
  numBytes += cSlice_init(&cSlice_tF7pERjk, 1, -1);
  numBytes += cSlice_init(&cSlice_VEa2egjY, 1, -1);
  numBytes += cSlice_init(&cSlice_LXxO9rht, 1, -1);
  numBytes += cBinop_init(&cBinop_VGk57d6H, 2048.0f); // __mul
  numBytes += sVarf_init(&sVarf_Y5LYNmQj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_gPZixf1b, -1.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_srKajN6u, 1.0f); // __pow
  numBytes += sVarf_init(&sVarf_rl3i1Hto, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_a81RjVii, 0, 1);
  numBytes += cSlice_init(&cSlice_jSC8DwDV, 1, 1);
  numBytes += cBinop_init(&cBinop_nwPc63su, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_exU4GgIm, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_KfllLE13, 22050.0f);
  numBytes += sVarf_init(&sVarf_Wu1BAZy2, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_e24ndz30, 0, 1);
  numBytes += cSlice_init(&cSlice_9sHJUydF, 1, 1);
  numBytes += sVarf_init(&sVarf_H6hQAdxV, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_UC2UniWl, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_62MqKaqt, 2.0f);
  numBytes += cDelay_init(this, &cDelay_q5o18k9o, 3.0f);
  numBytes += cDelay_init(this, &cDelay_ZtULHriU, 3.0f);
  numBytes += cPack_init(&cPack_C3fhnqYw, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_FlY83ZdV, 2.0f);
  numBytes += cDelay_init(this, &cDelay_G9Kp59wv, 2.0f);
  numBytes += cBinop_init(&cBinop_wkXh7GMI, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_GYdx25hS, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_aUg6U3ZY, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_PhF2RIQT, 22050.0f);
  numBytes += sVarf_init(&sVarf_dXM8P1k0, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_lBaP7nq5, 3.0f);
  numBytes += sVarf_init(&sVarf_fXDrMF29, 44100.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_M1bk2Bpp, 3.0f);
  numBytes += cBinop_init(&cBinop_I9J3JLFM, 1.0f); // __pow
  numBytes += cBinop_init(&cBinop_WyiwiafM, 0.0f); // __pow
  numBytes += cIf_init(&cIf_wiOrVcTn, false);
  numBytes += cSlice_init(&cSlice_bjl69yx2, 1, 1);
  numBytes += cSlice_init(&cSlice_aUOVvtS8, 0, 1);
  numBytes += cDelay_init(this, &cDelay_ojzSRNC4, 3.0f);
  numBytes += cPack_init(&cPack_Q29UwsmG, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_BpfeER8P, 44100.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_1g0aw1V9, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_2ALbBIKV, 3.0f);
  numBytes += cBinop_init(&cBinop_7dwygXJd, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_oVTSebHs, 0.0f, 0.0f, false);
  numBytes += cSlice_init(&cSlice_WamoEHhN, 1, -1);
  numBytes += cSlice_init(&cSlice_FGDpJOVq, 0, 1);
  numBytes += cSlice_init(&cSlice_MmXiOaKc, 1, 1);
  numBytes += cPack_init(&cPack_C7k0t1zS, 2, 0.0f, 0.0f);
  numBytes += sVarf_init(&sVarf_QiXEwzil, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_mWuKpe0C, 0.0f); // __pow
  numBytes += cIf_init(&cIf_4ZrAcY3u, false);
  numBytes += cSlice_init(&cSlice_5HOXgoAs, 1, 1);
  numBytes += cSlice_init(&cSlice_j8yb2HaY, 0, 1);
  numBytes += cPack_init(&cPack_CqFbEI7B, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_cdxHeEvU, 3.0f);
  numBytes += sVarf_init(&sVarf_01QTtBux, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_Zf5qr8Ie, 1.0f); // __pow
  numBytes += cPack_init(&cPack_gBV8e3SP, 2, 0.0f, 0.0f);
  numBytes += cDelay_init(this, &cDelay_ZsFeJi7s, 3.0f);
  numBytes += cSlice_init(&cSlice_ppWSunWa, 1, -1);
  numBytes += cSlice_init(&cSlice_mfo40rl9, 1, -1);
  numBytes += cDelay_init(this, &cDelay_V9MnY90S, 3.0f);
  numBytes += sVarf_init(&sVarf_QM22area, 44100.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_aKVVRGmA, 22050.0f);
  numBytes += sVarf_init(&sVarf_pEp7LBuH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kz3WlxsF, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_D01rdLfl, 0.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_OASU1zry, 3.0f);
  numBytes += cSlice_init(&cSlice_upXVMKVH, 1, 1);
  numBytes += cSlice_init(&cSlice_esC8FsOp, 0, 1);
  numBytes += cBinop_init(&cBinop_RFZj49RJ, 2048.0f); // __mul
  numBytes += cDelay_init(this, &cDelay_VVMEA87x, 3.0f);
  numBytes += cDelay_init(this, &cDelay_ltlr56PU, 2.0f);
  numBytes += sVarf_init(&sVarf_k2DwLNLN, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_RVXLDfB6, 1.0f); // __pow
  numBytes += sVarf_init(&sVarf_ijN5FsBu, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_s2q2QuIa, 22050.0f);
  numBytes += cBinop_init(&cBinop_1zG0ZabY, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_WoIzKJzK, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WMQN8bce, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_LSMCY6dQ, 2.0f);
  numBytes += sVarf_init(&sVarf_6qDXppRS, -1.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_FzexiGZf, 2.0f);
  numBytes += sVarf_init(&sVarf_2t2HFd15, 44100.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_epmk::~Heavy_epmk() {
  cPack_free(&cPack_6GMLy0Yf);
  cPack_free(&cPack_Tt6QFMlh);
  cPack_free(&cPack_NMCe51U3);
  cPack_free(&cPack_keKCiVOg);
  cPack_free(&cPack_PzQv3Glk);
  cPack_free(&cPack_UEx14s2I);
  cPack_free(&cPack_eJSMizEh);
  cPack_free(&cPack_MQvPWJpb);
  cPack_free(&cPack_hVdhzN7A);
  cPack_free(&cPack_19h6Yiyg);
  cPack_free(&cPack_fBmId62d);
  cPack_free(&cPack_Sfa3Ypdb);
  hTable_free(&hTable_GJ7cS7QV);
  hTable_free(&hTable_xRdJ46as);
  hTable_free(&hTable_wf984nPp);
  cPack_free(&cPack_Uutd3Jvu);
  cPack_free(&cPack_MtPSQZPT);
  cPack_free(&cPack_UjX5JuhO);
  cPack_free(&cPack_TVhYke5E);
  cPack_free(&cPack_I7mtl1jZ);
  cPack_free(&cPack_anxjdzZ0);
  cPack_free(&cPack_ODeAQJp5);
  cPack_free(&cPack_M7NMcNCz);
  cPack_free(&cPack_Udryqu6f);
  cPack_free(&cPack_UC2UniWl);
  cPack_free(&cPack_C3fhnqYw);
  cPack_free(&cPack_Q29UwsmG);
  cPack_free(&cPack_C7k0t1zS);
  cPack_free(&cPack_CqFbEI7B);
  cPack_free(&cPack_gBV8e3SP);
}

HvTable *Heavy_epmk::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x2454D2C7: return &hTable_wf984nPp; // 1137-used
    case 0x914C7371: return &hTable_GJ7cS7QV; // 1137-pitches
    case 0x859EC837: return &hTable_xRdJ46as; // 1137-ids
    default: return nullptr;
  }
}

void Heavy_epmk::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0xFAF44138: { // 1001-buz-pha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WZGcqWFz_sendMessage);
      break;
    }
    case 0x77189A6A: { // 1001-poly
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_C8Hsp3hj_sendMessage);
      break;
    }
    case 0xDC81E6F4: { // 1137-currentVoiceId
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3PgVuTIr_sendMessage);
      break;
    }
    case 0xB27386B: { // 1137-indexOff
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0jHySNQ1_sendMessage);
      break;
    }
    case 0xC258811B: { // 1137-indexOn
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nwH62XWV_sendMessage);
      break;
    }
    case 0x3F022017: { // 1137-isFirstOff
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_T8Ss4f7x_sendMessage);
      break;
    }
    case 0xB5C5B30E: { // 1137-isFirstOn
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dALt2xPH_sendMessage);
      break;
    }
    case 0xC606F4EF: { // 1137-maxVoiceId
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_COXvsMtn_sendMessage);
      break;
    }
    case 0xE4359D0C: { // 1137-shouldSteal
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Lqz42fx7_sendMessage);
      break;
    }
    case 0xD57A287: { // 1137-voiceId++
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jRvkrjxS_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Dg9INgDk_sendMessage);
      break;
    }
    case 0x67E37CA3: { // __hv_notein
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bAd13OnD_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_epmk::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 0;
}



/*
 * Send Function Implementations
 */


void Heavy_epmk::cReceive_nwH62XWV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_IRNQbArb, 1, m, &cTabwrite_IRNQbArb_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_L80fXeGl, 1, m, &cTabwrite_L80fXeGl_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_YWzWBFPc, 1, m, &cTabwrite_YWzWBFPc_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_sswKgrub, 1, m, &cVar_sswKgrub_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_2KLTNhn0, 1, m, &cVar_2KLTNhn0_sendMessage);
}

void Heavy_epmk::cReceive_WZGcqWFz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ncKKB3NR, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_dvvQLlOg, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_XOBMDNnv, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_gPZixf1b, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_6qDXppRS, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_t7PegvxC, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_WaXArmjW, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_eT6qixFO, m);
}

void Heavy_epmk::cSlice_vP86MQEP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_kdHaZ4Xl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSwitchcase_xfDUO7bf_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_hRmG4Zpu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cVar_onMessage(_c, &Context(_c)->cVar_Uphj5t3l, 0, m, &cVar_Uphj5t3l_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_mk1Ni2sr_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x40C00000: { // "6.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sPeQ6Iev, 0, m, &cSlice_sPeQ6Iev_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_sPeQ6Iev_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_otLzeeNS, 0, m, &cSlice_otLzeeNS_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ucasbZQv, 0, m, &cSlice_ucasbZQv_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_otLzeeNS, 0, m, &cSlice_otLzeeNS_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ucasbZQv, 0, m, &cSlice_ucasbZQv_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSend_e6O9fh6b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_C8Hsp3hj_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_BCIJLsgj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_rsQ08RHJ, 0, m, &cSlice_rsQ08RHJ_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_5RY6wqfc, 0, m, &cSlice_5RY6wqfc_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_rsQ08RHJ, 0, m, &cSlice_rsQ08RHJ_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_5RY6wqfc, 0, m, &cSlice_5RY6wqfc_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_KHkC2jai_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x40400000: { // "3.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_BCIJLsgj, 0, m, &cSlice_BCIJLsgj_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cDelay_uC1zErwX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_uC1zErwX, m);
  cPack_onMessage(_c, &Context(_c)->cPack_6GMLy0Yf, 0, m, &cPack_6GMLy0Yf_sendMessage);
}

void Heavy_epmk::cSwitchcase_iLtBHzaU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_rHeougJ1_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_rHeougJ1_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_uC1zErwX, 1, m, &cDelay_uC1zErwX_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Pa1s3gEr_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_rHeougJ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_uC1zErwX, 0, m, &cDelay_uC1zErwX_sendMessage);
}

void Heavy_epmk::cCast_Pa1s3gEr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_uC1zErwX, 0, m, &cDelay_uC1zErwX_sendMessage);
}

void Heavy_epmk::cCast_VGHRrmYi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RA0HU1MD_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_HefqDziL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_4k9vagq8_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_4nflNVM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_pE8HM6eJ, 0, m, NULL);
}

void Heavy_epmk::cMsg_nUDceWBu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Q8JuVswo, 0, m, &cDelay_Q8JuVswo_sendMessage);
}

void Heavy_epmk::cSwitchcase_4k9vagq8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_nUDceWBu_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_nUDceWBu_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_Q8JuVswo, 1, m, &cDelay_Q8JuVswo_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1i48pQsl_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_1i48pQsl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Q8JuVswo, 0, m, &cDelay_Q8JuVswo_sendMessage);
}

void Heavy_epmk::cDelay_Q8JuVswo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Q8JuVswo, m);
  cMsg_9WIrCAmu_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_yPaEKZak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_tVArO084_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_lWJg2EeG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HefqDziL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ytpaKJFR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FKVo0sEE_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yPaEKZak_sendMessage);
  cSwitchcase_FyzGsH0i_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_Lfi9W68Z_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lWJg2EeG_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cPack_6GMLy0Yf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LiPNTViO_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_wPfSC7Fh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_V3OzHfOs_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_V3OzHfOs_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_hRga1sRh, 1, m, &cDelay_hRga1sRh_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tkyH1xea_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_hRga1sRh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_hRga1sRh, m);
  cPack_onMessage(_c, &Context(_c)->cPack_NMCe51U3, 0, m, &cPack_NMCe51U3_sendMessage);
}

void Heavy_epmk::cCast_tkyH1xea_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_hRga1sRh, 0, m, &cDelay_hRga1sRh_sendMessage);
}

void Heavy_epmk::cMsg_V3OzHfOs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_hRga1sRh, 0, m, &cDelay_hRga1sRh_sendMessage);
}

void Heavy_epmk::cSystem_93Zs8oAO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Wzdz5YYY, m);
}

void Heavy_epmk::cMsg_rbljJDWa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_93Zs8oAO_sendMessage);
}

void Heavy_epmk::cMsg_mgygbqZI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_tuZtUI6X, HV_BINOP_MULTIPLY, 1, m, &cBinop_tuZtUI6X_sendMessage);
}

void Heavy_epmk::cMsg_dm3Whzrv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_KBe2MDKf, 0, m, &cDelay_KBe2MDKf_sendMessage);
}

void Heavy_epmk::cSwitchcase_87h8Maiv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_dm3Whzrv_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_dm3Whzrv_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_KBe2MDKf, 1, m, &cDelay_KBe2MDKf_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HPeQbyqa_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_HPeQbyqa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_KBe2MDKf, 0, m, &cDelay_KBe2MDKf_sendMessage);
}

void Heavy_epmk::cDelay_KBe2MDKf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_KBe2MDKf, m);
  cMsg_4nflNVM2_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_DdgOcAlw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mgygbqZI_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_pvIhfrat_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 1.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_vRXrCX88, 0, m, NULL);
}

void Heavy_epmk::cBinop_tuZtUI6X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_NMCe51U3, 1, m, &cPack_NMCe51U3_sendMessage);
}

void Heavy_epmk::cMsg_8hDTtUBd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ax3Veexw_sendMessage);
}

void Heavy_epmk::cMsg_76UXV52b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_KndJsFs4_sendMessage);
}

void Heavy_epmk::cBinop_AlekmWSU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_21q2w3LR_sendMessage);
}

void Heavy_epmk::cSystem_0sQMKYtX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_76UXV52b_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_OVfTKafp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0sQMKYtX_sendMessage);
}

void Heavy_epmk::cBinop_KndJsFs4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AlekmWSU, HV_BINOP_MULTIPLY, 1, m, &cBinop_AlekmWSU_sendMessage);
}

void Heavy_epmk::cVar_boi8ORcx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AlekmWSU, HV_BINOP_MULTIPLY, 0, m, &cBinop_AlekmWSU_sendMessage);
}

void Heavy_epmk::cBinop_6N9Jgxg8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HwQjMaSb, m);
}

void Heavy_epmk::cBinop_L7kn4WGs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_6N9Jgxg8_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_jX08Ccs3, m);
}

void Heavy_epmk::cBinop_21q2w3LR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_L7kn4WGs_sendMessage);
}

void Heavy_epmk::cCast_z1Sw9bN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_iLtBHzaU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_jzc76YNY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_WNqZjkrA_sendMessage);
}

void Heavy_epmk::cMsg_uhOmkfFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Mo08ka5l, HV_BINOP_POW, 0, m, &cBinop_Mo08ka5l_sendMessage);
}

void Heavy_epmk::cBinop_WNqZjkrA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Mo08ka5l, HV_BINOP_POW, 1, m, &cBinop_Mo08ka5l_sendMessage);
  cMsg_uhOmkfFq_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_2jRIKIRi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HKl6JCkD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qcAvEML1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VEy9UzFb_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_cABduJ25, 0, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_hhnJelk6, m);
}

void Heavy_epmk::cBinop_Mo08ka5l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_2jRIKIRi_sendMessage);
}

void Heavy_epmk::cMsg_n7kx5c9Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_cABduJ25, 1, m);
}

void Heavy_epmk::cSlice_wqKQLYq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_S7qzbzph_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_yBwHq4QE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_8BqLfaLW, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cPack_Tt6QFMlh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_p1Mi40gm_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_FKVo0sEE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_87h8Maiv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cDelay_oDMfRf9T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_oDMfRf9T, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_oUUcYLoD_sendMessage);
}

void Heavy_epmk::cBinop_AZLxkLk0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tuZtUI6X, HV_BINOP_MULTIPLY, 0, m, &cBinop_tuZtUI6X_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 128.0f, 0, m, &cBinop_XCrZSuyL_sendMessage);
}

void Heavy_epmk::cIf_FajDBHZy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_5d1fV3rL_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_DYf6QYB8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_PxZ6MZn7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8xRFsorC, m);
}

void Heavy_epmk::cMsg_shH4mXvK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_PxZ6MZn7, HV_BINOP_POW, 0, m, &cBinop_PxZ6MZn7_sendMessage);
}

void Heavy_epmk::cMsg_5d1fV3rL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_8xRFsorC, m);
}

void Heavy_epmk::cBinop_ayroJhto_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_FajDBHZy, 1, m, &cIf_FajDBHZy_sendMessage);
}

void Heavy_epmk::cBinop_fO3glmNT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PxZ6MZn7, HV_BINOP_POW, 1, m, &cBinop_PxZ6MZn7_sendMessage);
  cMsg_shH4mXvK_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_4v3m2Rvc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_FajDBHZy, 0, m, &cIf_FajDBHZy_sendMessage);
}

void Heavy_epmk::cCast_h4uBNaAY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_ayroJhto_sendMessage);
}

void Heavy_epmk::cBinop_DYf6QYB8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_Np37JLw4_sendMessage);
}

void Heavy_epmk::cBinop_Np37JLw4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_fO3glmNT_sendMessage);
}

void Heavy_epmk::cVar_w4FPwqDt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jv61Vp8C, HV_BINOP_MULTIPLY, 0, m, &cBinop_jv61Vp8C_sendMessage);
}

void Heavy_epmk::cMsg_n5Qb5j6h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_zXaTYjoC_sendMessage);
}

void Heavy_epmk::cMsg_zWVGFbfK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Pu8Ssmjm_sendMessage);
}

void Heavy_epmk::cSystem_Pu8Ssmjm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n5Qb5j6h_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_zXaTYjoC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jv61Vp8C, HV_BINOP_MULTIPLY, 1, m, &cBinop_jv61Vp8C_sendMessage);
}

void Heavy_epmk::cBinop_jv61Vp8C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_TCOzDMq4_sendMessage);
}

void Heavy_epmk::cBinop_lX5yGlZG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_IJfyM2us, m);
}

void Heavy_epmk::cBinop_1AF4D8A7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_lX5yGlZG_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_xcXCOi6K, m);
}

void Heavy_epmk::cBinop_TCOzDMq4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_1AF4D8A7_sendMessage);
}

void Heavy_epmk::cMsg_1w1RWDzC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 1.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jt9VwSq5, 0, m, &cSlice_jt9VwSq5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KSFCHYdd, 0, m, &cSlice_KSFCHYdd_sendMessage);
}

void Heavy_epmk::cMsg_p1Mi40gm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_O3knnQ2x_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_qj7PKbdq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 50.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jt9VwSq5, 0, m, &cSlice_jt9VwSq5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KSFCHYdd, 0, m, &cSlice_KSFCHYdd_sendMessage);
}

void Heavy_epmk::cCast_jqr2z3DJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_wPfSC7Fh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_DrfZkhH1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_boi8ORcx, 0, m, &cVar_boi8ORcx_sendMessage);
}

void Heavy_epmk::cCast_5DHu2SRu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tp9Pqnui_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_qtajn3fx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wqKQLYq0, 0, m, &cSlice_wqKQLYq0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yBwHq4QE, 0, m, &cSlice_yBwHq4QE_sendMessage);
}

void Heavy_epmk::cMsg_S7qzbzph_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_DrfZkhH1_sendMessage);
}

void Heavy_epmk::cCast_VEy9UzFb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VGHRrmYi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jqr2z3DJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pShXfYWl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_z1Sw9bN1_sendMessage);
}

void Heavy_epmk::cMsg_3dxRpcy6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Scs8dmJh_sendMessage);
}

void Heavy_epmk::cCast_pShXfYWl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1w1RWDzC_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_LiPNTViO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jt9VwSq5, 0, m, &cSlice_jt9VwSq5_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_KSFCHYdd, 0, m, &cSlice_KSFCHYdd_sendMessage);
}

void Heavy_epmk::cBinop_i9zetNDC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_QYzqkDxv_sendMessage);
}

void Heavy_epmk::cBinop_Nz6YUyXO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7AxHFT0w, HV_BINOP_POW, 1, m, &cBinop_7AxHFT0w_sendMessage);
  cMsg_QKtaTJJg_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_7AxHFT0w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_t8ovObIA_sendMessage);
}

void Heavy_epmk::cBinop_d9niMPx9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_Nz6YUyXO_sendMessage);
}

void Heavy_epmk::cMsg_QKtaTJJg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_7AxHFT0w, HV_BINOP_POW, 0, m, &cBinop_7AxHFT0w_sendMessage);
}

void Heavy_epmk::cBinop_t8ovObIA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DdgOcAlw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5DHu2SRu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eTkhBlvQ_sendMessage);
}

void Heavy_epmk::cMsg_9WIrCAmu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_vRXrCX88, 0, m, NULL);
}

void Heavy_epmk::cBinop_XCrZSuyL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_6GMLy0Yf, 1, m, &cPack_6GMLy0Yf_sendMessage);
}

void Heavy_epmk::cBinop_ax3Veexw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -30.0f, 0, m, &cBinop_i9zetNDC_sendMessage);
}

void Heavy_epmk::cMsg_fyrGulOM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2048.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_tuZtUI6X, HV_BINOP_MULTIPLY, 1, m, &cBinop_tuZtUI6X_sendMessage);
}

void Heavy_epmk::cMsg_9T1UETNL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20000.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_pE8HM6eJ, 0, m, NULL);
}

void Heavy_epmk::cCast_HKl6JCkD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fyrGulOM_sendMessage(_c, 0, m);
}

void Heavy_epmk::cPack_NMCe51U3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qtajn3fx_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_Re1ysKlj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Re1ysKlj, m);
  cMsg_n7kx5c9Z_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_NOPwzLMr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Re1ysKlj, 0, m, &cDelay_Re1ysKlj_sendMessage);
}

void Heavy_epmk::cCast_TjeWOU39_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Re1ysKlj, 0, m, &cDelay_Re1ysKlj_sendMessage);
}

void Heavy_epmk::cSwitchcase_FyzGsH0i_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_NOPwzLMr_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_NOPwzLMr_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_Re1ysKlj, 1, m, &cDelay_Re1ysKlj_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TjeWOU39_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cBinop_oUUcYLoD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 126.0f, 0, m, &cBinop_2pnO7Jht_sendMessage);
}

void Heavy_epmk::cMsg_PGHsE242_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_TwvKlGM2_sendMessage);
}

void Heavy_epmk::cSystem_TwvKlGM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_uuzYHu3R, m);
}

void Heavy_epmk::cCast_TtNmyXef_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSwitchcase_y1PFSVdc_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TtNmyXef_sendMessage);
      break;
    }
    default: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_oDMfRf9T, 0, m, &cDelay_oDMfRf9T_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_tp9Pqnui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_AZLxkLk0_sendMessage);
}

void Heavy_epmk::cBinop_xeM3fstx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Lfi9W68Z_onMessage(_c, NULL, 0, m, NULL);
  cPack_onMessage(_c, &Context(_c)->cPack_Tt6QFMlh, 1, m, &cPack_Tt6QFMlh_sendMessage);
}

void Heavy_epmk::cDelay_2VUt8K82_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_2VUt8K82, m);
  cPack_onMessage(_c, &Context(_c)->cPack_Tt6QFMlh, 0, m, &cPack_Tt6QFMlh_sendMessage);
}

void Heavy_epmk::cMsg_RA0HU1MD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.1f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_wqKQLYq0, 0, m, &cSlice_wqKQLYq0_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_yBwHq4QE, 0, m, &cSlice_yBwHq4QE_sendMessage);
}

void Heavy_epmk::cCast_qcAvEML1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tp9Pqnui_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_GqMXX6IW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_d9niMPx9_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_d9niMPx9_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_O3knnQ2x_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Pm9JLfLs, 0, m, &cSlice_Pm9JLfLs_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_GqMXX6IW, 0, m, &cSlice_GqMXX6IW_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_Pm9JLfLs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_jzc76YNY_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_jzc76YNY_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_ytpaKJFR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pvIhfrat_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_OUgEFKK3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_2VUt8K82, 0, m, &cDelay_2VUt8K82_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_6La5XOFv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_xeM3fstx_sendMessage);
      cSwitchcase_y1PFSVdc_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_Scs8dmJh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_w4FPwqDt, 0, m, &cVar_w4FPwqDt_sendMessage);
}

void Heavy_epmk::cSlice_KSFCHYdd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_ULEXtwvp, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_jt9VwSq5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_3dxRpcy6_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_eTkhBlvQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_NMCe51U3, 0, m, &cPack_NMCe51U3_sendMessage);
}

void Heavy_epmk::cBinop_QYzqkDxv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_h4uBNaAY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4v3m2Rvc_sendMessage);
}

void Heavy_epmk::cBinop_2pnO7Jht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8hDTtUBd_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_AvkRm3ac_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_AvkRm3ac, m);
  cMsg_9T1UETNL_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_tVArO084_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_r3wfhYYp_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_r3wfhYYp_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_AvkRm3ac, 1, m, &cDelay_AvkRm3ac_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_E2kSk5OT_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_r3wfhYYp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_AvkRm3ac, 0, m, &cDelay_AvkRm3ac_sendMessage);
}

void Heavy_epmk::cCast_E2kSk5OT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_AvkRm3ac, 0, m, &cDelay_AvkRm3ac_sendMessage);
}

void Heavy_epmk::cReceive_3PgVuTIr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_t4MumeSy, 1, m, &cVar_t4MumeSy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_EXPNJXz8, 1, m, &cVar_EXPNJXz8_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Jug2qN9Z, 1, m, &cVar_Jug2qN9Z_sendMessage);
}

void Heavy_epmk::cSlice_YMQGOJcU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_9sk9BPoc, 0, m, &cSlice_9sk9BPoc_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_W9Gi37CH, 0, m, &cSlice_W9Gi37CH_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_9sk9BPoc, 0, m, &cSlice_9sk9BPoc_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_W9Gi37CH, 0, m, &cSlice_W9Gi37CH_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_rzhsWkON_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YMQGOJcU, 0, m, &cSlice_YMQGOJcU_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSwitchcase_PRKSyCEj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_JXaDjkIZ, 0, m, &cSlice_JXaDjkIZ_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_JXaDjkIZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_3lHGpSYF, 0, m, &cSlice_3lHGpSYF_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Qn4LNaIZ, 0, m, &cSlice_Qn4LNaIZ_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_3lHGpSYF, 0, m, &cSlice_3lHGpSYF_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Qn4LNaIZ, 0, m, &cSlice_Qn4LNaIZ_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cReceive_bAd13OnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSlice_onMessage(_c, &Context(_c)->cSlice_vP86MQEP, 0, m, &cSlice_vP86MQEP_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_hRmG4Zpu, 0, m, &cSlice_hRmG4Zpu_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kdHaZ4Xl, 0, m, &cSlice_kdHaZ4Xl_sendMessage);
}

void Heavy_epmk::cReceive_T8Ss4f7x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TEfUzKwI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_o30JzycF_sendMessage);
}

void Heavy_epmk::cMsg_g02jSNkM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_PjvtB6QK, 0, m, &cDelay_PjvtB6QK_sendMessage);
}

void Heavy_epmk::cDelay_PjvtB6QK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_PjvtB6QK, m);
  cMsg_bjfybI8P_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_va0mJr1d_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_g02jSNkM_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_g02jSNkM_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_PjvtB6QK, 1, m, &cDelay_PjvtB6QK_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mBJajpuz_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_mBJajpuz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_PjvtB6QK, 0, m, &cDelay_PjvtB6QK_sendMessage);
}

void Heavy_epmk::cBinop_I5zmWXRm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gehgD4Pu, 0, m, &cVar_gehgD4Pu_sendMessage);
}

void Heavy_epmk::cBinop_KIHclMWd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 126.0f, 0, m, &cBinop_Qaf233De_sendMessage);
}

void Heavy_epmk::cMsg_rWhO1HdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_QSrMd8di, 0, m, NULL);
}

void Heavy_epmk::cBinop_WVq469ad_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_cslHpSan_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_P5OyvDsd, m);
}

void Heavy_epmk::cBinop_LG4oUtHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_WVq469ad_sendMessage);
}

void Heavy_epmk::cVar_gehgD4Pu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AECNtNPm, HV_BINOP_MULTIPLY, 0, m, &cBinop_AECNtNPm_sendMessage);
}

void Heavy_epmk::cBinop_cslHpSan_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_sYUgoI3m, m);
}

void Heavy_epmk::cBinop_8JfwIZaB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AECNtNPm, HV_BINOP_MULTIPLY, 1, m, &cBinop_AECNtNPm_sendMessage);
}

void Heavy_epmk::cBinop_AECNtNPm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_LG4oUtHg_sendMessage);
}

void Heavy_epmk::cSystem_xFPhi6Uc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ojzcCwNO_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_zHoZ8LQq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xFPhi6Uc_sendMessage);
}

void Heavy_epmk::cMsg_ojzcCwNO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_8JfwIZaB_sendMessage);
}

void Heavy_epmk::cMsg_6qIrsYJM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_RvHVp2CH, 0, m, &cDelay_RvHVp2CH_sendMessage);
}

void Heavy_epmk::cDelay_RvHVp2CH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_RvHVp2CH, m);
  cMsg_fvjZxGB1_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_Kuy46xb1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_RvHVp2CH, 0, m, &cDelay_RvHVp2CH_sendMessage);
}

void Heavy_epmk::cSwitchcase_EhXzV2eO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_6qIrsYJM_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_6qIrsYJM_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_RvHVp2CH, 1, m, &cDelay_RvHVp2CH_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Kuy46xb1_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cSwitchcase_fb5mBjmz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_wyJZp6RC_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_wyJZp6RC_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_1wXZNaRa, 1, m, &cDelay_1wXZNaRa_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_740E5GIi_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_wyJZp6RC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_1wXZNaRa, 0, m, &cDelay_1wXZNaRa_sendMessage);
}

void Heavy_epmk::cDelay_1wXZNaRa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_1wXZNaRa, m);
  cPack_onMessage(_c, &Context(_c)->cPack_UEx14s2I, 0, m, &cPack_UEx14s2I_sendMessage);
}

void Heavy_epmk::cCast_740E5GIi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_1wXZNaRa, 0, m, &cDelay_1wXZNaRa_sendMessage);
}

void Heavy_epmk::cBinop_p2HmQSEA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_PzQv3Glk, 1, m, &cPack_PzQv3Glk_sendMessage);
}

void Heavy_epmk::cCast_2ufIiSHo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KGdMuJEW_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_iK9iX8Aq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -30.0f, 0, m, &cBinop_7BnpQDrS_sendMessage);
}

void Heavy_epmk::cCast_smzunkAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Yq3ClBDr, 0, m, &cDelay_Yq3ClBDr_sendMessage);
}

void Heavy_epmk::cMsg_vgBr91qo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Yq3ClBDr, 0, m, &cDelay_Yq3ClBDr_sendMessage);
}

void Heavy_epmk::cDelay_Yq3ClBDr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Yq3ClBDr, m);
  cMsg_VaiXbI33_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_mzVJFGz0_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_vgBr91qo_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_vgBr91qo_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_Yq3ClBDr, 1, m, &cDelay_Yq3ClBDr_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_smzunkAb_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cBinop_T8lJ1SBI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_UEx14s2I, 1, m, &cPack_UEx14s2I_sendMessage);
}

void Heavy_epmk::cDelay_HSRN0604_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_HSRN0604, m);
  cPack_onMessage(_c, &Context(_c)->cPack_keKCiVOg, 0, m, &cPack_keKCiVOg_sendMessage);
}

void Heavy_epmk::cCast_64PendEm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_EhXzV2eO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_macMa1Bh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_iK9iX8Aq_sendMessage);
}

void Heavy_epmk::cSlice_eswYpKSo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_79qi5uOc, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_i8mSwgCh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_bBiuAUBI_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_gHXpmnnf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_0TEMnZ5O_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_0TEMnZ5O_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_1XMZ74Vz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_laZMmqNy, 0, m, &cSlice_laZMmqNy_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gHXpmnnf, 0, m, &cSlice_gHXpmnnf_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_laZMmqNy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_jLDC0JxE_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_jLDC0JxE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_COFF9uVO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2048.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_p2HmQSEA, HV_BINOP_MULTIPLY, 1, m, &cBinop_p2HmQSEA_sendMessage);
}

void Heavy_epmk::cBinop_gzu9OhpC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xk7JEKrV, HV_BINOP_POW, 1, m, &cBinop_Xk7JEKrV_sendMessage);
  cMsg_uZ8VGQBZ_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_Xk7JEKrV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_35Sq3uVH_sendMessage);
}

void Heavy_epmk::cBinop_35Sq3uVH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_U8gqpCNi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_k7oX6XYy_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gvUqoTda_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_jVNG1Weq, 0, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_CfalTCcj, m);
}

void Heavy_epmk::cMsg_uZ8VGQBZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xk7JEKrV, HV_BINOP_POW, 0, m, &cBinop_Xk7JEKrV_sendMessage);
}

void Heavy_epmk::cBinop_jLDC0JxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_gzu9OhpC_sendMessage);
}

void Heavy_epmk::cCast_0X5muVov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_fb5mBjmz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_qJhnBvnr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_d9qfv7mv_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_wqRujtqP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mzVJFGz0_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cPack_keKCiVOg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4KnfRyas_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_BwrjPVnk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rxI3xAWv, HV_BINOP_POW, 1, m, &cBinop_rxI3xAWv_sendMessage);
  cMsg_dAEqJBVu_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_rxI3xAWv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_QUAqo9P9_sendMessage);
}

void Heavy_epmk::cBinop_0TEMnZ5O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_BwrjPVnk_sendMessage);
}

void Heavy_epmk::cMsg_dAEqJBVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rxI3xAWv, HV_BINOP_POW, 0, m, &cBinop_rxI3xAWv_sendMessage);
}

void Heavy_epmk::cBinop_QUAqo9P9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SJHSazi6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rCw6LdQh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gCkLeyjH_sendMessage);
}

void Heavy_epmk::cMsg_bBiuAUBI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_I5zmWXRm_sendMessage);
}

void Heavy_epmk::cCast_NdQOzuM0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSwitchcase_fuVdusSY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NdQOzuM0_sendMessage);
      break;
    }
    default: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_1iPnSjpU, 0, m, &cDelay_1iPnSjpU_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cPack_PzQv3Glk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m5dkH8Tv_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_4APF9Jmf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_PaGTGMHV_sendMessage);
}

void Heavy_epmk::cCast_f4dh6I93_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bFfY9dxL_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSystem_vtGcRABE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_1BF7sQxY, m);
}

void Heavy_epmk::cMsg_kQYokZj8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vtGcRABE_sendMessage);
}

void Heavy_epmk::cPack_UEx14s2I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_asfC3h9C_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_3Fn26u93_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_4APF9Jmf_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_F6vvsfkO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_eVDEFIxw, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_KGdMuJEW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.1f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i8mSwgCh, 0, m, &cSlice_i8mSwgCh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eswYpKSo, 0, m, &cSlice_eswYpKSo_sendMessage);
}

void Heavy_epmk::cBinop_7BnpQDrS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_Iwk8vpgC_sendMessage);
}

void Heavy_epmk::cCast_uiZbySAq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_0SSTJuV5, 0, m, &cIf_0SSTJuV5_sendMessage);
}

void Heavy_epmk::cMsg_Gy3uilTk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Zu0SSk53, m);
}

void Heavy_epmk::cBinop_RYvqEiMV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Zu0SSk53, m);
}

void Heavy_epmk::cBinop_tLhMEGx1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_vXxt4LGT_sendMessage);
}

void Heavy_epmk::cBinop_woRwu3yu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_0SSTJuV5, 1, m, &cIf_0SSTJuV5_sendMessage);
}

void Heavy_epmk::cCast_FIzai8pR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_woRwu3yu_sendMessage);
}

void Heavy_epmk::cBinop_vXxt4LGT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RYvqEiMV, HV_BINOP_POW, 1, m, &cBinop_RYvqEiMV_sendMessage);
  cMsg_XUtnMa7T_sendMessage(_c, 0, m);
}

void Heavy_epmk::cIf_0SSTJuV5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_Gy3uilTk_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_ov5edTzu_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_XUtnMa7T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RYvqEiMV, HV_BINOP_POW, 0, m, &cBinop_RYvqEiMV_sendMessage);
}

void Heavy_epmk::cBinop_ov5edTzu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_tLhMEGx1_sendMessage);
}

void Heavy_epmk::cDelay_l7cUr5Ag_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_l7cUr5Ag, m);
  cMsg_rWhO1HdT_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_5s9Q76aY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_l7cUr5Ag, 0, m, &cDelay_l7cUr5Ag_sendMessage);
}

void Heavy_epmk::cCast_gt2J3yBI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_l7cUr5Ag, 0, m, &cDelay_l7cUr5Ag_sendMessage);
}

void Heavy_epmk::cSwitchcase_9TfbG4r3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_5s9Q76aY_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_5s9Q76aY_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_l7cUr5Ag, 1, m, &cDelay_l7cUr5Ag_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gt2J3yBI_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_gCkLeyjH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_PzQv3Glk, 0, m, &cPack_PzQv3Glk_sendMessage);
}

void Heavy_epmk::cMsg_bjfybI8P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_jVNG1Weq, 1, m);
}

void Heavy_epmk::cBinop_Iwk8vpgC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FIzai8pR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uiZbySAq_sendMessage);
}

void Heavy_epmk::cVar_H8QR8Ihu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kyv9edTE, HV_BINOP_MULTIPLY, 0, m, &cBinop_kyv9edTE_sendMessage);
}

void Heavy_epmk::cBinop_GBisMUSW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_K7dg7LMg_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Nua1l6af, m);
}

void Heavy_epmk::cBinop_G9sqXpq5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_GBisMUSW_sendMessage);
}

void Heavy_epmk::cBinop_K7dg7LMg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dBRA10fL, m);
}

void Heavy_epmk::cBinop_br7kXTlR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kyv9edTE, HV_BINOP_MULTIPLY, 1, m, &cBinop_kyv9edTE_sendMessage);
}

void Heavy_epmk::cMsg_K1afOTDU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_br7kXTlR_sendMessage);
}

void Heavy_epmk::cBinop_kyv9edTE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_G9sqXpq5_sendMessage);
}

void Heavy_epmk::cMsg_GFCjmW7q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_9dYcelKd_sendMessage);
}

void Heavy_epmk::cSystem_9dYcelKd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_K1afOTDU_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_U8gqpCNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_COFF9uVO_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_dSoLZ3ba_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ist2igEk_onMessage(_c, NULL, 0, m, NULL);
  cPack_onMessage(_c, &Context(_c)->cPack_keKCiVOg, 1, m, &cPack_keKCiVOg_sendMessage);
}

void Heavy_epmk::cMsg_xf3hvEqD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_p2HmQSEA, HV_BINOP_MULTIPLY, 1, m, &cBinop_p2HmQSEA_sendMessage);
}

void Heavy_epmk::cSystem_XfgAD0gx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xyC5Ikvg, m);
}

void Heavy_epmk::cMsg_sK9ZgBj3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_XfgAD0gx_sendMessage);
}

void Heavy_epmk::cCast_953YcU5D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_YY9N5Y2K_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_XIIgoeRF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_ASZh2xAE_sendMessage);
}

void Heavy_epmk::cSlice_otLzeeNS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_dSoLZ3ba_sendMessage);
      cSwitchcase_fuVdusSY_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_ucasbZQv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_HSRN0604, 0, m, &cDelay_HSRN0604_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_VaiXbI33_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20000.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_QSrMd8di, 0, m, NULL);
}

void Heavy_epmk::cBinop_Qaf233De_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_macMa1Bh_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_asfC3h9C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3Fn26u93, 0, m, &cSlice_3Fn26u93_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6vvsfkO, 0, m, &cSlice_F6vvsfkO_sendMessage);
}

void Heavy_epmk::cMsg_m5dkH8Tv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_i8mSwgCh, 0, m, &cSlice_i8mSwgCh_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_eswYpKSo, 0, m, &cSlice_eswYpKSo_sendMessage);
}

void Heavy_epmk::cMsg_4KnfRyas_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_1XMZ74Vz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_FtAxY100_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 50.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3Fn26u93, 0, m, &cSlice_3Fn26u93_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6vvsfkO, 0, m, &cSlice_F6vvsfkO_sendMessage);
}

void Heavy_epmk::cCast_SJHSazi6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xf3hvEqD_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_1GXPZQ6B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_64PendEm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_f4dh6I93_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jKRNciKR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wqRujtqP_sendMessage);
  cSwitchcase_va0mJr1d_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_ist2igEk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1GXPZQ6B_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cCast_k7oX6XYy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XIIgoeRF_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_1iPnSjpU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_1iPnSjpU, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_KIHclMWd_sendMessage);
}

void Heavy_epmk::cSwitchcase_YY9N5Y2K_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_HDaY1brn_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_HDaY1brn_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_2k3wkh2H, 1, m, &cDelay_2k3wkh2H_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GjQlKSrk_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_GjQlKSrk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_2k3wkh2H, 0, m, &cDelay_2k3wkh2H_sendMessage);
}

void Heavy_epmk::cDelay_2k3wkh2H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_2k3wkh2H, m);
  cPack_onMessage(_c, &Context(_c)->cPack_PzQv3Glk, 0, m, &cPack_PzQv3Glk_sendMessage);
}

void Heavy_epmk::cMsg_HDaY1brn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_2k3wkh2H, 0, m, &cDelay_2k3wkh2H_sendMessage);
}

void Heavy_epmk::cCast_gvUqoTda_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2ufIiSHo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_953YcU5D_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qJhnBvnr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0X5muVov_sendMessage);
}

void Heavy_epmk::cCast_jKRNciKR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_9TfbG4r3_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_ASZh2xAE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_p2HmQSEA, HV_BINOP_MULTIPLY, 0, m, &cBinop_p2HmQSEA_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 128.0f, 0, m, &cBinop_T8lJ1SBI_sendMessage);
}

void Heavy_epmk::cMsg_d9qfv7mv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 1.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3Fn26u93, 0, m, &cSlice_3Fn26u93_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_F6vvsfkO, 0, m, &cSlice_F6vvsfkO_sendMessage);
}

void Heavy_epmk::cMsg_bFfY9dxL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 1.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_H8MWG43z, 0, m, NULL);
}

void Heavy_epmk::cBinop_PaGTGMHV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_H8QR8Ihu, 0, m, &cVar_H8QR8Ihu_sendMessage);
}

void Heavy_epmk::cCast_rCw6LdQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XIIgoeRF_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_fvjZxGB1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_H8MWG43z, 0, m, NULL);
}

void Heavy_epmk::cPack_eJSMizEh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_e6O9fh6b_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_EW2orTYi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_hVdhzN7A, 1, m, &cPack_hVdhzN7A_sendMessage);
}

void Heavy_epmk::cBinop_A8M0G186_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_j5okvBiY, m);
}

void Heavy_epmk::cVar_uVInNTaE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g6mUgCcE, HV_BINOP_MULTIPLY, 0, m, &cBinop_g6mUgCcE_sendMessage);
}

void Heavy_epmk::cBinop_lI5F9HIt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_sDMXfiLZ_sendMessage);
}

void Heavy_epmk::cBinop_sDMXfiLZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_A8M0G186_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_x32YE819, m);
}

void Heavy_epmk::cBinop_JOaBjg4y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g6mUgCcE, HV_BINOP_MULTIPLY, 1, m, &cBinop_g6mUgCcE_sendMessage);
}

void Heavy_epmk::cMsg_conejrri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_JOaBjg4y_sendMessage);
}

void Heavy_epmk::cBinop_g6mUgCcE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_lI5F9HIt_sendMessage);
}

void Heavy_epmk::cSystem_VxGGy6vh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_conejrri_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_KrvQx77Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_VxGGy6vh_sendMessage);
}

void Heavy_epmk::cMsg_IznHcP9I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_qXPvmCl8, 0, m, &cDelay_qXPvmCl8_sendMessage);
}

void Heavy_epmk::cCast_7g82iEfJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_qXPvmCl8, 0, m, &cDelay_qXPvmCl8_sendMessage);
}

void Heavy_epmk::cDelay_qXPvmCl8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_qXPvmCl8, m);
  cMsg_zYpCw28g_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_dTfSR3lU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_IznHcP9I_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_IznHcP9I_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_qXPvmCl8, 1, m, &cDelay_qXPvmCl8_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7g82iEfJ_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_Ge0T4zqw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_jvFdUTvR_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_CeEkebcJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Aia9Ncdr_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_CNxyK0td_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_95u84ts2_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_PAt6wvL0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uVInNTaE, 0, m, &cVar_uVInNTaE_sendMessage);
}

void Heavy_epmk::cCast_r84CTtzC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_kpqBw9hw, 0, m, &cDelay_kpqBw9hw_sendMessage);
}

void Heavy_epmk::cMsg_eICM5o28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_kpqBw9hw, 0, m, &cDelay_kpqBw9hw_sendMessage);
}

void Heavy_epmk::cDelay_kpqBw9hw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_kpqBw9hw, m);
  cMsg_6RQxs58q_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_MPclYDtt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_eICM5o28_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_eICM5o28_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_kpqBw9hw, 1, m, &cDelay_kpqBw9hw_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r84CTtzC_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_tqgjsWP5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_c2GllO0T, HV_BINOP_MULTIPLY, 1, m, &cBinop_c2GllO0T_sendMessage);
}

void Heavy_epmk::cMsg_RIWVMaoW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_VGsNoehu_sendMessage);
}

void Heavy_epmk::cCast_HLFzVuT8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_T7nbrDDc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_53R7Rwrr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XgIRmEcD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tw3q4QaC_sendMessage);
  cSwitchcase_S26OuMQV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_v9mYCx5I_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HLFzVuT8_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cMsg_c2AXrz4i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_T2f1i12W, 0, m, &cDelay_T2f1i12W_sendMessage);
}

void Heavy_epmk::cSwitchcase_95u84ts2_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_c2AXrz4i_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_c2AXrz4i_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_T2f1i12W, 1, m, &cDelay_T2f1i12W_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PQNfXM2e_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_T2f1i12W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_T2f1i12W, m);
  cPack_onMessage(_c, &Context(_c)->cPack_hVdhzN7A, 0, m, &cPack_hVdhzN7A_sendMessage);
}

void Heavy_epmk::cCast_PQNfXM2e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_T2f1i12W, 0, m, &cDelay_T2f1i12W_sendMessage);
}

void Heavy_epmk::cMsg_ZD47XImx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.1f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8KBLo4y8, 0, m, &cSlice_8KBLo4y8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6WuVud0W, 0, m, &cSlice_6WuVud0W_sendMessage);
}

void Heavy_epmk::cMsg_Aia9Ncdr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 1.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SyKUbcGp, 0, m, &cSlice_SyKUbcGp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HJFwWTRW, 0, m, &cSlice_HJFwWTRW_sendMessage);
}

void Heavy_epmk::cCast_3sOI4HUA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oEhHT7Ny_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_XgIRmEcD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_SARYixqM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_c2GllO0T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_19h6Yiyg, 1, m, &cPack_19h6Yiyg_sendMessage);
}

void Heavy_epmk::cCast_tw3q4QaC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_MPclYDtt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_eordxaou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4IkBE738_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_wTQp5t0g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_0puDSON4_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_0puDSON4_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_9N7UrA3j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_qlObaZRA_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_qlObaZRA_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_4wPGrsEE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_9N7UrA3j, 0, m, &cSlice_9N7UrA3j_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_wTQp5t0g, 0, m, &cSlice_wTQp5t0g_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cCast_dYuSeY35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pLtqfUoO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ge0T4zqw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CeEkebcJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CNxyK0td_sendMessage);
}

void Heavy_epmk::cCast_TUQ4uaOn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_6WKKdTIS, 0, m, &cDelay_6WKKdTIS_sendMessage);
}

void Heavy_epmk::cMsg_avWKTc3x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_6WKKdTIS, 0, m, &cDelay_6WKKdTIS_sendMessage);
}

void Heavy_epmk::cSwitchcase_S26OuMQV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_avWKTc3x_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_avWKTc3x_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_6WKKdTIS, 1, m, &cDelay_6WKKdTIS_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TUQ4uaOn_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_6WKKdTIS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_6WKKdTIS, m);
  cMsg_Vb5qOjg6_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_XPfQPtDA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_PAt6wvL0_sendMessage);
}

void Heavy_epmk::cMsg_uNmn8Ifx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 1.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_zJ57bCVQ, 0, m, NULL);
}

void Heavy_epmk::cDelay_AXHqiQC8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_AXHqiQC8, m);
  cPack_onMessage(_c, &Context(_c)->cPack_19h6Yiyg, 0, m, &cPack_19h6Yiyg_sendMessage);
}

void Heavy_epmk::cMsg_xFsUCXLg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_AXHqiQC8, 0, m, &cDelay_AXHqiQC8_sendMessage);
}

void Heavy_epmk::cSwitchcase_jvFdUTvR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_xFsUCXLg_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_xFsUCXLg_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_AXHqiQC8, 1, m, &cDelay_AXHqiQC8_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DybG1d8V_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_DybG1d8V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_AXHqiQC8, 0, m, &cDelay_AXHqiQC8_sendMessage);
}

void Heavy_epmk::cCast_pLtqfUoO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZD47XImx_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_LBXYg2fJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tqgjsWP5_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_lQ00qnQL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 50.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SyKUbcGp, 0, m, &cSlice_SyKUbcGp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HJFwWTRW, 0, m, &cSlice_HJFwWTRW_sendMessage);
}

void Heavy_epmk::cCast_T7nbrDDc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_dTfSR3lU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSlice_HJFwWTRW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_Rz3kZvOT, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_SyKUbcGp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_RIWVMaoW_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_tRJmKeYg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_bwQByHsx_sendMessage);
}

void Heavy_epmk::cBinop_o0pKcFnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_CgiMPPpD, m);
}

void Heavy_epmk::cIf_zfivC5eR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_QY0gA85c_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_NTEbD6B1_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_NTEbD6B1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_tRJmKeYg_sendMessage);
}

void Heavy_epmk::cMsg_QY0gA85c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_CgiMPPpD, m);
}

void Heavy_epmk::cMsg_F0ss5qMe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_o0pKcFnQ, HV_BINOP_POW, 0, m, &cBinop_o0pKcFnQ_sendMessage);
}

void Heavy_epmk::cBinop_bwQByHsx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_o0pKcFnQ, HV_BINOP_POW, 1, m, &cBinop_o0pKcFnQ_sendMessage);
  cMsg_F0ss5qMe_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_mC1iCL2S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_zfivC5eR, 0, m, &cIf_zfivC5eR_sendMessage);
}

void Heavy_epmk::cCast_eKpHEBLL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_cb66jWOy_sendMessage);
}

void Heavy_epmk::cBinop_cb66jWOy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_zfivC5eR, 1, m, &cIf_zfivC5eR_sendMessage);
}

void Heavy_epmk::cCast_53R7Rwrr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uNmn8Ifx_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_VGsNoehu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jRxwGNjG, 0, m, &cVar_jRxwGNjG_sendMessage);
}

void Heavy_epmk::cMsg_oEhHT7Ny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_8oPRrHu7_sendMessage);
}

void Heavy_epmk::cDelay_bZHAkciX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_bZHAkciX, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_6dZM8LAn_sendMessage);
}

void Heavy_epmk::cSystem_CnFtNIJv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bypqQ6o0_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_DflNblco_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CnFtNIJv_sendMessage);
}

void Heavy_epmk::cBinop_jZjzFa8P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_vytLa6Ri_sendMessage);
}

void Heavy_epmk::cBinop_qasBGVz8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jZjzFa8P, HV_BINOP_MULTIPLY, 1, m, &cBinop_jZjzFa8P_sendMessage);
}

void Heavy_epmk::cMsg_bypqQ6o0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_qasBGVz8_sendMessage);
}

void Heavy_epmk::cBinop_vytLa6Ri_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ARHYpMQo_sendMessage);
}

void Heavy_epmk::cBinop_ARHYpMQo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_IVQJo5AE_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ANyncv8H, m);
}

void Heavy_epmk::cVar_jRxwGNjG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jZjzFa8P, HV_BINOP_MULTIPLY, 0, m, &cBinop_jZjzFa8P_sendMessage);
}

void Heavy_epmk::cBinop_IVQJo5AE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6oBVCur5, m);
}

void Heavy_epmk::cSystem_ARv9Ry5o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_73fO1cEi, m);
}

void Heavy_epmk::cMsg_QYnXFwtS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ARv9Ry5o_sendMessage);
}

void Heavy_epmk::cBinop_6dZM8LAn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 126.0f, 0, m, &cBinop_eordxaou_sendMessage);
}

void Heavy_epmk::cBinop_8oPRrHu7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_c2GllO0T, HV_BINOP_MULTIPLY, 0, m, &cBinop_c2GllO0T_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 128.0f, 0, m, &cBinop_EW2orTYi_sendMessage);
}

void Heavy_epmk::cMsg_Vb5qOjg6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_RgB7pHdJ, 1, m);
}

void Heavy_epmk::cDelay_Fk6HKDah_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Fk6HKDah, m);
  cPack_onMessage(_c, &Context(_c)->cPack_MQvPWJpb, 0, m, &cPack_MQvPWJpb_sendMessage);
}

void Heavy_epmk::cCast_KoC6N4pB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_G4gEFAak_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_XlRvmPk4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_v9mYCx5I_onMessage(_c, NULL, 0, m, NULL);
  cPack_onMessage(_c, &Context(_c)->cPack_MQvPWJpb, 1, m, &cPack_MQvPWJpb_sendMessage);
}

void Heavy_epmk::cCast_fc1Zns0Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oEhHT7Ny_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_0lHCPtOA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FaN7pKtk, HV_BINOP_POW, 1, m, &cBinop_FaN7pKtk_sendMessage);
  cMsg_CtqZuQ4y_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_B56WQRxB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LBXYg2fJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3sOI4HUA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LpvHx6a6_sendMessage);
}

void Heavy_epmk::cBinop_0puDSON4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_0lHCPtOA_sendMessage);
}

void Heavy_epmk::cMsg_CtqZuQ4y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_FaN7pKtk, HV_BINOP_POW, 0, m, &cBinop_FaN7pKtk_sendMessage);
}

void Heavy_epmk::cBinop_FaN7pKtk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_B56WQRxB_sendMessage);
}

void Heavy_epmk::cMsg_4IkBE738_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_fPII2Mcg_sendMessage);
}

void Heavy_epmk::cCast_LpvHx6a6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_19h6Yiyg, 0, m, &cPack_19h6Yiyg_sendMessage);
}

void Heavy_epmk::cBinop_2EzODc4o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_TbtB8bbn_sendMessage);
}

void Heavy_epmk::cBinop_H97wkSqQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2EzODc4o, HV_BINOP_POW, 1, m, &cBinop_2EzODc4o_sendMessage);
  cMsg_gytFwcvD_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_TbtB8bbn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KoC6N4pB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fc1Zns0Q_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dYuSeY35_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_RgB7pHdJ, 0, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_dDlQufKU, m);
}

void Heavy_epmk::cBinop_qlObaZRA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_H97wkSqQ_sendMessage);
}

void Heavy_epmk::cMsg_gytFwcvD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_2EzODc4o, HV_BINOP_POW, 0, m, &cBinop_2EzODc4o_sendMessage);
}

void Heavy_epmk::cMsg_MY03orzl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_SyKUbcGp, 0, m, &cSlice_SyKUbcGp_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HJFwWTRW, 0, m, &cSlice_HJFwWTRW_sendMessage);
}

void Heavy_epmk::cMsg_G4gEFAak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2048.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_c2GllO0T, HV_BINOP_MULTIPLY, 1, m, &cBinop_c2GllO0T_sendMessage);
}

void Heavy_epmk::cMsg_JkaSFwnS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_8KBLo4y8, 0, m, &cSlice_8KBLo4y8_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_6WuVud0W, 0, m, &cSlice_6WuVud0W_sendMessage);
}

void Heavy_epmk::cPack_MQvPWJpb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5GnMMfEG_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_6RQxs58q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20000.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_dRgh5hWp, 0, m, NULL);
}

void Heavy_epmk::cSystem_nxYQCoBF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_u3uK0HQJ, m);
}

void Heavy_epmk::cMsg_HIUBVq8Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nxYQCoBF_sendMessage);
}

void Heavy_epmk::cBinop_YMPKuFxA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_ozdJrvod_sendMessage);
}

void Heavy_epmk::cMsg_zYpCw28g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_zJ57bCVQ, 0, m, NULL);
}

void Heavy_epmk::cPack_hVdhzN7A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MY03orzl_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_0FR9rHoo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_dRgh5hWp, 0, m, NULL);
}

void Heavy_epmk::cMsg_gUoOm5Lv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_w41e5ZU9, 0, m, &cDelay_w41e5ZU9_sendMessage);
}

void Heavy_epmk::cSwitchcase_SARYixqM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_gUoOm5Lv_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_gUoOm5Lv_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_w41e5ZU9, 1, m, &cDelay_w41e5ZU9_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QROGGtuZ_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_w41e5ZU9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_w41e5ZU9, m);
  cMsg_0FR9rHoo_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_QROGGtuZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_w41e5ZU9, 0, m, &cDelay_w41e5ZU9_sendMessage);
}

void Heavy_epmk::cSlice_BmvIEvyx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_Fk6HKDah, 0, m, &cDelay_Fk6HKDah_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_B1pAf17F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_XlRvmPk4_sendMessage);
      cSwitchcase_4ydfHgZd_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cPack_19h6Yiyg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JkaSFwnS_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_9w2jEcL9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSwitchcase_4ydfHgZd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9w2jEcL9_sendMessage);
      break;
    }
    default: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_bZHAkciX, 0, m, &cDelay_bZHAkciX_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cBinop_ozdJrvod_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eKpHEBLL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mC1iCL2S_sendMessage);
}

void Heavy_epmk::cMsg_5GnMMfEG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_4wPGrsEE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSlice_8KBLo4y8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_XPfQPtDA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_6WuVud0W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_Ur4adPC4, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_fPII2Mcg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -30.0f, 0, m, &cBinop_YMPKuFxA_sendMessage);
}

void Heavy_epmk::cBinop_GKyvT1CY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_nSWOAlC5, 1, m, &cIf_nSWOAlC5_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_CA2rKWhC_sendMessage);
}

void Heavy_epmk::cCast_wgJjH2hp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WeFjokzW_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_kYDkIfCo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_3gLfqDQ8, 2, m, &cTabwrite_3gLfqDQ8_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_3gLfqDQ8, 2, m, &cTabwrite_3gLfqDQ8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_iUMskju9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_kYDkIfCo, 0, m, &cSlice_kYDkIfCo_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_3gLfqDQ8, 0, m, &cTabwrite_3gLfqDQ8_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cTabwrite_3gLfqDQ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSlice_gM8nF4KN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_jX0ct55x, 2, m, &cTabwrite_jX0ct55x_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_jX0ct55x, 2, m, &cTabwrite_jX0ct55x_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_6RKE40dy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_gM8nF4KN, 0, m, &cSlice_gM8nF4KN_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_jX0ct55x, 0, m, &cTabwrite_jX0ct55x_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cTabwrite_jX0ct55x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cVar_FsD1PrOT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eqyBYeZl, 0, m, &cVar_eqyBYeZl_sendMessage);
}

void Heavy_epmk::cCast_uXQN8H26_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FsD1PrOT, 0, m, &cVar_FsD1PrOT_sendMessage);
}

void Heavy_epmk::cCast_KuAcq5r7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aIN64Mk0_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSend_7QQBjBtg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jRvkrjxS_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_fv4DZJ80_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_pUdxGwFH_sendMessage);
}

void Heavy_epmk::cMsg_ChHJUlVa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_R89WfgPB, 0, m, &cVar_R89WfgPB_sendMessage);
}

void Heavy_epmk::cIf_fYq9mhFg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_bveaUm28_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_6qYk6Lrd_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cUnop_6qYk6Lrd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_8oJMqj4X_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_fjvo9cC7, 0, m, &cIf_fjvo9cC7_sendMessage);
}

void Heavy_epmk::cBinop_UMtNs4YM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_fYq9mhFg, 1, m, &cIf_fYq9mhFg_sendMessage);
}

void Heavy_epmk::cVar_eqyBYeZl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_UMtNs4YM_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_fYq9mhFg, 0, m, &cIf_fYq9mhFg_sendMessage);
}

void Heavy_epmk::cUnop_bveaUm28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_8oJMqj4X_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_fjvo9cC7, 0, m, &cIf_fjvo9cC7_sendMessage);
}

void Heavy_epmk::cCast_72L1vB0F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ChHJUlVa_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_rOvviR50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_jX0ct55x, 1, m, &cTabwrite_jX0ct55x_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_KSQkytqy, 1, m, &cTabwrite_KSQkytqy_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_3gLfqDQ8, 1, m, &cTabwrite_3gLfqDQ8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wgJjH2hp_sendMessage);
}

void Heavy_epmk::cIf_fjvo9cC7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PGI21bEL_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_72L1vB0F_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_8oJMqj4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_fjvo9cC7, 1, m, &cIf_fjvo9cC7_sendMessage);
}

void Heavy_epmk::cCast_XWBc0bbs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SXUL47nj, HV_BINOP_LESS_THAN, 0, m, &cBinop_SXUL47nj_sendMessage);
}

void Heavy_epmk::cBinop_pUdxGwFH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_R89WfgPB, 0, m, &cVar_R89WfgPB_sendMessage);
}

void Heavy_epmk::cVar_R89WfgPB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XWBc0bbs_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t9Lyz35q_sendMessage);
}

void Heavy_epmk::cBinop_SXUL47nj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_VwpV3TkG, 1, m, &cIf_VwpV3TkG_sendMessage);
}

void Heavy_epmk::cCast_PGI21bEL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SXUL47nj, HV_BINOP_LESS_THAN, 1, m, &cBinop_SXUL47nj_sendMessage);
}

void Heavy_epmk::cIf_VwpV3TkG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rOvviR50_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fv4DZJ80_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_t9Lyz35q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_VwpV3TkG, 0, m, &cIf_VwpV3TkG_sendMessage);
}

void Heavy_epmk::cMsg_aIN64Mk0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSend_7QQBjBtg_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_WeFjokzW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_6RKE40dy_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HJZOpLBw_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_iUMskju9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSlice_laTRehu2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_KSQkytqy, 2, m, &cTabwrite_KSQkytqy_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_KSQkytqy, 2, m, &cTabwrite_KSQkytqy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_HJZOpLBw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_laTRehu2, 0, m, &cSlice_laTRehu2_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_KSQkytqy, 0, m, &cTabwrite_KSQkytqy_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cTabwrite_KSQkytqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cMsg_DGa5dUO9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 65535.0f);
  cSend_lSgYL2Hf_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_vynuW6cG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_piAHECcJ_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSend_xUDAsFPO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_3PgVuTIr_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSend_dXKfCGVz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_T8Ss4f7x_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSend_ckjuP7kr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_T8Ss4f7x_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_TEfUzKwI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_NKD3qy0o_sendMessage);
}

void Heavy_epmk::cMsg_UEuh8jgF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_ya0ylmlK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_ZMJACW22_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_ytlYE58i_sendMessage);
}

void Heavy_epmk::cSend_DW7kseEu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nwH62XWV_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSend_S69k0w4s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0jHySNQ1_sendMessage(_c, 0, m);
}

void Heavy_epmk::cTabwrite_IRNQbArb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSwitchcase_NqylaVku_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_2qK2NXbV, 0, m, &cSlice_2qK2NXbV_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_IRNQbArb, 0, m, &cTabwrite_IRNQbArb_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cSlice_2qK2NXbV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_IRNQbArb, 2, m, &cTabwrite_IRNQbArb_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_IRNQbArb, 2, m, &cTabwrite_IRNQbArb_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_NKD3qy0o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VLIoMt2W, 0, m, &cVar_VLIoMt2W_sendMessage);
}

void Heavy_epmk::cCast_YRjIM6By_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xjfRfiLI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LFq6VwNR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YRWx3vLP_sendMessage);
}

void Heavy_epmk::cCast_zwUzzhC0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_VNcmhZLJ_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_qntfGuo1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Wqs3mRab, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_Wqs3mRab_sendMessage);
}

void Heavy_epmk::cCast_XkF12dD3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cK7rDEgg, HV_BINOP_LESS_THAN, 0, m, &cBinop_cK7rDEgg_sendMessage);
}

void Heavy_epmk::cCast_gVqNsdak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ujKZaCpx, 0, m, &cVar_ujKZaCpx_sendMessage);
}

void Heavy_epmk::cVar_W1YpIYeO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_T6BWHpoY_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_tYCkUEKg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BDQ2M9VC, 0, m, &cVar_BDQ2M9VC_sendMessage);
}

void Heavy_epmk::cVar_VM13ldWN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RWLAaA7x_sendMessage);
}

void Heavy_epmk::cCast_efqlgcgi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VLIoMt2W, 0, m, &cVar_VLIoMt2W_sendMessage);
}

void Heavy_epmk::cCast_yPLleMFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Jug2qN9Z, 0, m, &cVar_Jug2qN9Z_sendMessage);
}

void Heavy_epmk::cBinop_ytlYE58i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_PJrfts5l, 1, m, &cIf_PJrfts5l_sendMessage);
}

void Heavy_epmk::cSwitchcase_OdeXmoyU_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_kifF3ecj, 0, m, &cSlice_kifF3ecj_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_E4ZQss4p, 0, m, &cTabwrite_E4ZQss4p_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cSlice_kifF3ecj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_E4ZQss4p, 2, m, &cTabwrite_E4ZQss4p_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_E4ZQss4p, 2, m, &cTabwrite_E4ZQss4p_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cTabwrite_E4ZQss4p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSlice_luNuWwnV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_0juDVZzh, 2, m, &cTabwrite_0juDVZzh_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_0juDVZzh, 2, m, &cTabwrite_0juDVZzh_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_ya0ylmlK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_luNuWwnV, 0, m, &cSlice_luNuWwnV_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_0juDVZzh, 0, m, &cTabwrite_0juDVZzh_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cTabwrite_0juDVZzh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSend_T6BWHpoY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nwH62XWV_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_W6NpKI2V_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ac4EMDrd, 0, m, &cSlice_ac4EMDrd_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_G4TxawPv_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7hOI4qQa_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cSlice_ac4EMDrd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_HUWuaSPD, 1, m, &cTabread_HUWuaSPD_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_HUWuaSPD, 1, m, &cTabread_HUWuaSPD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cVar_K5n7fUK4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MY2cgSZ8_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_EPLJxiUf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_HUWuaSPD, 0, m, &cTabread_HUWuaSPD_sendMessage);
}

void Heavy_epmk::cBinop_bjIclsdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EPLJxiUf, HV_BINOP_MIN, 1, m, &cBinop_EPLJxiUf_sendMessage);
}

void Heavy_epmk::cMsg_MY2cgSZ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2XYm8H56_sendMessage);
}

void Heavy_epmk::cBinop_PLFXSNSg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EPLJxiUf, HV_BINOP_MIN, 0, m, &cBinop_EPLJxiUf_sendMessage);
}

void Heavy_epmk::cCast_G4TxawPv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_K5n7fUK4, 0, m, &cVar_K5n7fUK4_sendMessage);
}

void Heavy_epmk::cSystem_2XYm8H56_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_bjIclsdT_sendMessage);
}

void Heavy_epmk::cCast_7hOI4qQa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_PLFXSNSg_sendMessage);
}

void Heavy_epmk::cTabread_HUWuaSPD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 1, m, &cPack_eJSMizEh_sendMessage);
}

void Heavy_epmk::cSend_B30Wbw9i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dALt2xPH_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_duiSvKD3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_W1YpIYeO, 1, m, &cVar_W1YpIYeO_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_D24uY3oj, 1, m, &cVar_D24uY3oj_sendMessage);
}

void Heavy_epmk::cCast_8WiSsSQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_RP52LpeY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_TUSUKKxC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Q6OMV9Yw, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_Q6OMV9Yw_sendMessage);
}

void Heavy_epmk::cBinop_Li179nCX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Q6OMV9Yw, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_Q6OMV9Yw_sendMessage);
}

void Heavy_epmk::cCast_iqXWppZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VM13ldWN, 0, m, &cVar_VM13ldWN_sendMessage);
}

void Heavy_epmk::cIf_mdzOwEp9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cIf_onMessage(_c, &Context(_c)->cIf_fI0sGWGB, 1, m, &cIf_fI0sGWGB_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_nsonc59K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ziUfdGzJ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cTabwrite_YWzWBFPc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSlice_5kQ3z6kK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_YWzWBFPc, 2, m, &cTabwrite_YWzWBFPc_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_YWzWBFPc, 2, m, &cTabwrite_YWzWBFPc_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_eXTHEiZK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5kQ3z6kK, 0, m, &cSlice_5kQ3z6kK_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_YWzWBFPc, 0, m, &cTabwrite_YWzWBFPc_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_KXuMiFUM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Io7EPZhf, 0, m, &cVar_Io7EPZhf_sendMessage);
}

void Heavy_epmk::cBinop_Q6OMV9Yw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_PJrfts5l, 0, m, &cIf_PJrfts5l_sendMessage);
}

void Heavy_epmk::cVar_EXPNJXz8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_OdeXmoyU_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cVar_D24uY3oj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_9woJHX4I_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_5Tr3cjND_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSwitchcase_NqylaVku_onMessage(_c, NULL, 0, m, NULL);
      cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 1, m, &cPack_eJSMizEh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_ZqE5vnDi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 2, m, &cPack_eJSMizEh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_EuZ80zE9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Li179nCX, HV_BINOP_LESS_THAN, 0, m, &cBinop_Li179nCX_sendMessage);
}

void Heavy_epmk::cCast_o30JzycF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_4tUonJFw, 1, m, &cIf_4tUonJFw_sendMessage);
}

void Heavy_epmk::cBinop_cK7rDEgg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mKqCyxeB, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_mKqCyxeB_sendMessage);
}

void Heavy_epmk::cSend_9woJHX4I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0jHySNQ1_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_riMQ1rvT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_WAUlgvjm_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_3dEm0xv3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_riMQ1rvT_sendMessage(_c, 0, m);
}

void Heavy_epmk::cVar_sswKgrub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RWLAaA7x_sendMessage);
}

void Heavy_epmk::cCast_gVXVs8LK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mk7myrRI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_duhzSrFn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LAxSnmmZ_sendMessage);
}

void Heavy_epmk::cSwitchcase_RP52LpeY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gVXVs8LK_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cCast_duhzSrFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ozq9RqOc_sendMessage(_c, 0, m);
}

void Heavy_epmk::cVar_VLIoMt2W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Wqs3mRab, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_Wqs3mRab_sendMessage);
}

void Heavy_epmk::cIf_4tUonJFw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_RwWd4GhU, 0, m, &cSlice_RwWd4GhU_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_88D9VjXX, 0, m, &cSlice_88D9VjXX_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iqXWppZa_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1d8cedaS_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9gzU6IpD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_OVj7W7az_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BDQ2M9VC, 1, m, &cVar_BDQ2M9VC_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ppWyP3eX, 1, m, &cVar_ppWyP3eX_sendMessage);
}

void Heavy_epmk::cCast_LAxSnmmZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_W1YpIYeO, 0, m, &cVar_W1YpIYeO_sendMessage);
}

void Heavy_epmk::cMsg_ozq9RqOc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSend_B30Wbw9i_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_9gzU6IpD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zwUzzhC0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IXKMA8E1_sendMessage);
}

void Heavy_epmk::cCast_fnjpcrXJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cPack_fBmId62d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_fI0sGWGB, 0, m, &cIf_fI0sGWGB_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_4tUonJFw, 0, m, &cIf_4tUonJFw_sendMessage);
}

void Heavy_epmk::cIf_fI0sGWGB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YRjIM6By_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZqE5vnDi, 0, m, &cSlice_ZqE5vnDi_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_5Tr3cjND, 0, m, &cSlice_5Tr3cjND_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KpG6IUqO_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3dEm0xv3_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mEbMCRBf_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cVar_2KLTNhn0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_W6NpKI2V_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cVar_Io7EPZhf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TKYqklJN, 0, m, &cVar_TKYqklJN_sendMessage);
}

void Heavy_epmk::cVar_ujKZaCpx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hwkm52OI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tYCkUEKg_sendMessage);
}

void Heavy_epmk::cCast_YRWx3vLP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sswKgrub, 0, m, &cVar_sswKgrub_sendMessage);
}

void Heavy_epmk::cCast_xKzbXuX6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_TUSUKKxC_sendMessage);
}

void Heavy_epmk::cCast_54xGbEM9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BDQ2M9VC, 0, m, &cVar_BDQ2M9VC_sendMessage);
}

void Heavy_epmk::cMsg_mChrKssA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSend_ckjuP7kr_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_hwkm52OI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ppWyP3eX, 0, m, &cVar_ppWyP3eX_sendMessage);
}

void Heavy_epmk::cCast_mk7myrRI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ppWyP3eX, 0, m, &cVar_ppWyP3eX_sendMessage);
}

void Heavy_epmk::cVar_Jug2qN9Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_eXTHEiZK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_LFq6VwNR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2KLTNhn0, 0, m, &cVar_2KLTNhn0_sendMessage);
}

void Heavy_epmk::cSlice_88D9VjXX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSwitchcase_phRtFC6y_onMessage(_c, NULL, 0, m, NULL);
      cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 1, m, &cPack_eJSMizEh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_RwWd4GhU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 2, m, &cPack_eJSMizEh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_mKqCyxeB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8WiSsSQx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZMJACW22_sendMessage);
}

void Heavy_epmk::cCast_GZMBvc4L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_oSzOXcnT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSlice_XelgS5r3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_RQaPyvvw, 2, m, &cTabwrite_RQaPyvvw_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_RQaPyvvw, 2, m, &cTabwrite_RQaPyvvw_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_phRtFC6y_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_XelgS5r3, 0, m, &cSlice_XelgS5r3_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_RQaPyvvw, 0, m, &cTabwrite_RQaPyvvw_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cTabwrite_RQaPyvvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cMsg_CxJSeVII_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 2, m, &cPack_eJSMizEh_sendMessage);
}

void Heavy_epmk::cMsg_CswyMQWu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSend_S69k0w4s_sendMessage(_c, 0, m);
  cSend_DW7kseEu_sendMessage(_c, 0, m);
  cSend_49t3KeS4_sendMessage(_c, 0, m);
  cSend_dXKfCGVz_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_KpG6IUqO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sswKgrub, 0, m, &cVar_sswKgrub_sendMessage);
}

void Heavy_epmk::cCast_1d8cedaS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UEuh8jgF_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_I4s98dGP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_D24uY3oj, 0, m, &cVar_D24uY3oj_sendMessage);
}

void Heavy_epmk::cCast_ZefYbJzT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pHGF1joO, HV_BINOP_LESS_THAN, 0, m, &cBinop_pHGF1joO_sendMessage);
}

void Heavy_epmk::cUnop_NVMuFOv0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_7u2M3lxK_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_7WpDhu1k, 0, m, &cIf_7WpDhu1k_sendMessage);
}

void Heavy_epmk::cUnop_BEvcprbf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_7u2M3lxK_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_7WpDhu1k, 0, m, &cIf_7WpDhu1k_sendMessage);
}

void Heavy_epmk::cBinop_H8P48Zra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_LGWXrlPv, 1, m, &cIf_LGWXrlPv_sendMessage);
}

void Heavy_epmk::cVar_TKYqklJN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_H8P48Zra_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_LGWXrlPv, 0, m, &cIf_LGWXrlPv_sendMessage);
}

void Heavy_epmk::cIf_LGWXrlPv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_NVMuFOv0_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_BEvcprbf_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_pHGF1joO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_NYbIOwzz, 1, m, &cIf_NYbIOwzz_sendMessage);
}

void Heavy_epmk::cCast_JWOZFYsv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pHGF1joO, HV_BINOP_LESS_THAN, 1, m, &cBinop_pHGF1joO_sendMessage);
}

void Heavy_epmk::cVar_gtxTaEbh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZefYbJzT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wMTfUB0t_sendMessage);
}

void Heavy_epmk::cBinop_7u2M3lxK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_7WpDhu1k, 1, m, &cIf_7WpDhu1k_sendMessage);
}

void Heavy_epmk::cIf_7WpDhu1k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JWOZFYsv_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6ZP49PHX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_6ZP49PHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4DPRXeAD_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_Mx4extWd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_M096N2LI_sendMessage);
}

void Heavy_epmk::cMsg_4DPRXeAD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_gtxTaEbh, 0, m, &cVar_gtxTaEbh_sendMessage);
}

void Heavy_epmk::cBinop_M096N2LI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gtxTaEbh, 0, m, &cVar_gtxTaEbh_sendMessage);
}

void Heavy_epmk::cCast_1p98UpBD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_duiSvKD3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GZMBvc4L_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nsonc59K_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fnjpcrXJ_sendMessage);
}

void Heavy_epmk::cIf_NYbIOwzz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1p98UpBD_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Mx4extWd_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_wMTfUB0t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_NYbIOwzz, 0, m, &cIf_NYbIOwzz_sendMessage);
}

void Heavy_epmk::cCast_2f6JELug_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_54xGbEM9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6Lb9l7kA_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I4s98dGP_sendMessage);
}

void Heavy_epmk::cSwitchcase_WJCiH7mD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2f6JELug_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cTabread_HnXOj8Iv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OVj7W7az_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XkF12dD3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_EuZ80zE9_sendMessage);
}

void Heavy_epmk::cBinop_4cy3MJYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tMg5guof, HV_BINOP_MIN, 0, m, &cBinop_tMg5guof_sendMessage);
}

void Heavy_epmk::cBinop_tMg5guof_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_HnXOj8Iv, 0, m, &cTabread_HnXOj8Iv_sendMessage);
}

void Heavy_epmk::cCast_cQTQxFlk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oK39szYQ, 0, m, &cVar_oK39szYQ_sendMessage);
}

void Heavy_epmk::cBinop_QSxHICKq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tMg5guof, HV_BINOP_MIN, 1, m, &cBinop_tMg5guof_sendMessage);
}

void Heavy_epmk::cMsg_xXt1AJ1g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FVWL5nJa_sendMessage);
}

void Heavy_epmk::cSlice_zBBmcUoN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_HnXOj8Iv, 1, m, &cTabread_HnXOj8Iv_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_HnXOj8Iv, 1, m, &cTabread_HnXOj8Iv_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_oSzOXcnT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_zBBmcUoN, 0, m, &cSlice_zBBmcUoN_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cQTQxFlk_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jQmZ844i_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_jQmZ844i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_4cy3MJYQ_sendMessage);
}

void Heavy_epmk::cVar_oK39szYQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xXt1AJ1g_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSystem_FVWL5nJa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_QSxHICKq_sendMessage);
}

void Heavy_epmk::cCast_Gdvtk3MT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_7BnVDf6B_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_pbHedEAM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mKqCyxeB, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_mKqCyxeB_sendMessage);
}

void Heavy_epmk::cVar_BDQ2M9VC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Li179nCX, HV_BINOP_LESS_THAN, 1, m, &cBinop_Li179nCX_sendMessage);
}

void Heavy_epmk::cCast_IXKMA8E1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EXPNJXz8, 0, m, &cVar_EXPNJXz8_sendMessage);
}

void Heavy_epmk::cVar_ppWyP3eX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cK7rDEgg, HV_BINOP_LESS_THAN, 1, m, &cBinop_cK7rDEgg_sendMessage);
}

void Heavy_epmk::cCast_UIDn9yDB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_pUkzxgaj_sendMessage);
}

void Heavy_epmk::cBinop_Y1whMJAa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zXbQjrix, HV_BINOP_MIN, 1, m, &cBinop_zXbQjrix_sendMessage);
}

void Heavy_epmk::cBinop_zXbQjrix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_PCrHz9yA, 0, m, &cTabread_PCrHz9yA_sendMessage);
}

void Heavy_epmk::cTabread_PCrHz9yA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pbHedEAM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xKzbXuX6_sendMessage);
}

void Heavy_epmk::cMsg_OR6pKrgb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_3FI0LosW_sendMessage);
}

void Heavy_epmk::cSlice_99VKPOLC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_PCrHz9yA, 1, m, &cTabread_PCrHz9yA_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_PCrHz9yA, 1, m, &cTabread_PCrHz9yA_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_ziUfdGzJ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_99VKPOLC, 0, m, &cSlice_99VKPOLC_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Cz2NLndt_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UIDn9yDB_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_Cz2NLndt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4Tw40AIy, 0, m, &cVar_4Tw40AIy_sendMessage);
}

void Heavy_epmk::cBinop_pUkzxgaj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zXbQjrix, HV_BINOP_MIN, 0, m, &cBinop_zXbQjrix_sendMessage);
}

void Heavy_epmk::cVar_4Tw40AIy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OR6pKrgb_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSystem_3FI0LosW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Y1whMJAa_sendMessage);
}

void Heavy_epmk::cSend_49t3KeS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dALt2xPH_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_Wqs3mRab_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mdzOwEp9, 0, m, &cIf_mdzOwEp9_sendMessage);
}

void Heavy_epmk::cTabwrite_L80fXeGl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSlice_PLQptpRv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_L80fXeGl, 2, m, &cTabwrite_L80fXeGl_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_L80fXeGl, 2, m, &cTabwrite_L80fXeGl_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_WAUlgvjm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_PLQptpRv, 0, m, &cSlice_PLQptpRv_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_L80fXeGl, 0, m, &cTabwrite_L80fXeGl_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_xjfRfiLI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CxJSeVII_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSend_VNcmhZLJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jRvkrjxS_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_6Lb9l7kA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mChrKssA_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSend_7BnVDf6B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jRvkrjxS_sendMessage(_c, 0, m);
}

void Heavy_epmk::cIf_PJrfts5l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cSwitchcase_WJCiH7mD_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_mEbMCRBf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Gdvtk3MT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yPLleMFK_sendMessage);
}

void Heavy_epmk::cCast_vi4TeAxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CswyMQWu_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_Wmsn1lf7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cIf_onMessage(_c, &Context(_c)->cIf_nSWOAlC5, 0, m, &cIf_nSWOAlC5_sendMessage);
      cIf_onMessage(_c, &Context(_c)->cIf_ymkkBIIq, 0, m, &cIf_ymkkBIIq_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_nWva1lel_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cVar_onMessage(_c, &Context(_c)->cVar_Uphj5t3l, 0, m, &cVar_Uphj5t3l_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cVar_vUb3kKKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RWLAaA7x_sendMessage);
}

void Heavy_epmk::cMsg_cx60IKgm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_nuuHnV1Y, 1, m, &cIf_nuuHnV1Y_sendMessage);
}

void Heavy_epmk::cCast_woI295iR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_EKJ7IS8t_sendMessage(_c, 0, m);
}

void Heavy_epmk::cPack_Sfa3Ypdb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vifil7xD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aOqcVsEO_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PEXMXpkx, 0, m, &cSlice_PEXMXpkx_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_kMUNXyoO, 0, m, &cSlice_kMUNXyoO_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_nuuHnV1Y, 0, m, &cIf_nuuHnV1Y_sendMessage);
}

void Heavy_epmk::cCast_MPoGj2ff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cx60IKgm_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_0Swxqp0I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fItqfZHl, 1, m, &cVar_fItqfZHl_sendMessage);
}

void Heavy_epmk::cSend_EKJ7IS8t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jRvkrjxS_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_AOVwFVsh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vUb3kKKI, 0, m, &cVar_vUb3kKKI_sendMessage);
}

void Heavy_epmk::cCast_KQaUlJjr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_6PjkeRwX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_OPxYZR3K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dYKBKgRS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MPoGj2ff_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oFtIw8X3_sendMessage);
}

void Heavy_epmk::cSwitchcase_qGPLl3Gb_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OPxYZR3K_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cVar_t4MumeSy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mMzxGbfC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_4Zhx9KQu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bjRrOIXg, 0, m, &cVar_bjRrOIXg_sendMessage);
}

void Heavy_epmk::cBinop_CLL65BOi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eo0tjb1e, HV_BINOP_MIN, 1, m, &cBinop_eo0tjb1e_sendMessage);
}

void Heavy_epmk::cBinop_eo0tjb1e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_cKN3Xqq7, 0, m, &cTabread_cKN3Xqq7_sendMessage);
}

void Heavy_epmk::cSystem_ikWif6N4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_CLL65BOi_sendMessage);
}

void Heavy_epmk::cBinop_s4BxOTyQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eo0tjb1e, HV_BINOP_MIN, 0, m, &cBinop_eo0tjb1e_sendMessage);
}

void Heavy_epmk::cMsg_PLFg2CuZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ikWif6N4_sendMessage);
}

void Heavy_epmk::cTabread_cKN3Xqq7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MDWAWfLC, HV_BINOP_EQ, 0, m, &cBinop_MDWAWfLC_sendMessage);
}

void Heavy_epmk::cVar_bjRrOIXg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PLFg2CuZ_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_otuPd9J1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_cKN3Xqq7, 1, m, &cTabread_cKN3Xqq7_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_cKN3Xqq7, 1, m, &cTabread_cKN3Xqq7_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_TFE9HDxj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_otuPd9J1, 0, m, &cSlice_otuPd9J1_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4Zhx9KQu_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WMZGcKw3_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_WMZGcKw3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_s4BxOTyQ_sendMessage);
}

void Heavy_epmk::cCast_GnrGw0JZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_t4MumeSy, 0, m, &cVar_t4MumeSy_sendMessage);
}

void Heavy_epmk::cCast_oFtIw8X3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rM8dNEYK, 0, m, &cVar_rM8dNEYK_sendMessage);
}

void Heavy_epmk::cCast_aNTIjtx2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IWDjxokj_sendMessage(_c, 0, m);
}

void Heavy_epmk::cVar_rM8dNEYK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_sYmf35zl, 1, m, &cTabwrite_sYmf35zl_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_8mQi3qrD, 1, m, &cTabwrite_8mQi3qrD_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_vUb3kKKI, 1, m, &cVar_vUb3kKKI_sendMessage);
}

void Heavy_epmk::cCast_gKm4Hyl1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MDWAWfLC, HV_BINOP_EQ, 1, m, &cBinop_MDWAWfLC_sendMessage);
}

void Heavy_epmk::cIf_nuuHnV1Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aNTIjtx2_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HVuiGpAd_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1aHwI25S_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_1s6ZG876, 0, m, &cSlice_1s6ZG876_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_hQfbQkBu, 0, m, &cSlice_hQfbQkBu_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AOVwFVsh_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_Vifil7xD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7zq5ceyZ, 0, m, &cVar_7zq5ceyZ_sendMessage);
}

void Heavy_epmk::cBinop_GryMUfWU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wLkxhy4t, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_wLkxhy4t_sendMessage);
}

void Heavy_epmk::cCast_YfS0mpbD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_TFE9HDxj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSlice_PEXMXpkx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_kMUNXyoO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gKm4Hyl1_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M5cvvQFv_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_dYKBKgRS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fItqfZHl, 0, m, &cVar_fItqfZHl_sendMessage);
}

void Heavy_epmk::cCast_ekXmJYg3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_nJqoOQ0q_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_1aHwI25S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_K9x0QXeo_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_M5cvvQFv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Il830noy, 0, m, &cVar_Il830noy_sendMessage);
}

void Heavy_epmk::cVar_7zq5ceyZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GryMUfWU, HV_BINOP_LESS_THAN, 1, m, &cBinop_GryMUfWU_sendMessage);
}

void Heavy_epmk::cSlice_1s6ZG876_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_hQfbQkBu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 1, m, &cPack_eJSMizEh_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_2TadCkyR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ix3MR3m9, HV_BINOP_LESS_THAN, 0, m, &cBinop_ix3MR3m9_sendMessage);
}

void Heavy_epmk::cCast_gYfcnRQm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_406yCcLV, 0, m, &cIf_406yCcLV_sendMessage);
}

void Heavy_epmk::cCast_v1oUqDzZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mvnmduh1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ekXmJYg3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KQaUlJjr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YfS0mpbD_sendMessage);
}

void Heavy_epmk::cIf_406yCcLV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_v1oUqDzZ_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1V9JdZ5j_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_pfXkHduX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zIoZmXbL_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_HSLJkfvD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ix3MR3m9, HV_BINOP_LESS_THAN, 1, m, &cBinop_ix3MR3m9_sendMessage);
}

void Heavy_epmk::cBinop_voLdg0NJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_iJ2Eh06S, 1, m, &cIf_iJ2Eh06S_sendMessage);
}

void Heavy_epmk::cVar_x404jybq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_voLdg0NJ_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_iJ2Eh06S, 0, m, &cIf_iJ2Eh06S_sendMessage);
}

void Heavy_epmk::cUnop_ZCLtk8JM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_gBXmzQQQ_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_DfIaFEHG, 0, m, &cIf_DfIaFEHG_sendMessage);
}

void Heavy_epmk::cUnop_LeVzTcyK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_gBXmzQQQ_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_DfIaFEHG, 0, m, &cIf_DfIaFEHG_sendMessage);
}

void Heavy_epmk::cIf_iJ2Eh06S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_LeVzTcyK_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_ZCLtk8JM_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_zIoZmXbL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_YX5AwNmN, 0, m, &cVar_YX5AwNmN_sendMessage);
}

void Heavy_epmk::cBinop_ix3MR3m9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_406yCcLV, 1, m, &cIf_406yCcLV_sendMessage);
}

void Heavy_epmk::cBinop_j1gW2Ewz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_YX5AwNmN, 0, m, &cVar_YX5AwNmN_sendMessage);
}

void Heavy_epmk::cBinop_gBXmzQQQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_DfIaFEHG, 1, m, &cIf_DfIaFEHG_sendMessage);
}

void Heavy_epmk::cIf_DfIaFEHG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HSLJkfvD_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pfXkHduX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_1V9JdZ5j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_j1gW2Ewz_sendMessage);
}

void Heavy_epmk::cVar_YX5AwNmN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2TadCkyR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gYfcnRQm_sendMessage);
}

void Heavy_epmk::cCast_T2KiHMR2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GryMUfWU, HV_BINOP_LESS_THAN, 0, m, &cBinop_GryMUfWU_sendMessage);
}

void Heavy_epmk::cCast_HVuiGpAd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_woI295iR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GnrGw0JZ_sendMessage);
}

void Heavy_epmk::cVar_Il830noy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_x404jybq, 0, m, &cVar_x404jybq_sendMessage);
}

void Heavy_epmk::cCast_mvnmduh1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rM8dNEYK, 1, m, &cVar_rM8dNEYK_sendMessage);
}

void Heavy_epmk::cMsg_8JX0dzG6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_nuuHnV1Y, 1, m, &cIf_nuuHnV1Y_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_rM8dNEYK, 0, m, &cVar_rM8dNEYK_sendMessage);
}

void Heavy_epmk::cBinop_DQBNQxUV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_qGPLl3Gb_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_IWDjxokj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_i2zxDh3u_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_MDWAWfLC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DQBNQxUV, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_DQBNQxUV_sendMessage);
}

void Heavy_epmk::cMsg_K9x0QXeo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 2, m, &cPack_eJSMizEh_sendMessage);
}

void Heavy_epmk::cBinop_wLkxhy4t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DQBNQxUV, HV_BINOP_LOGICAL_AND, 1, m, &cBinop_DQBNQxUV_sendMessage);
}

void Heavy_epmk::cCast_3VsB0roJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xdHEcu8b, 0, m, &cVar_xdHEcu8b_sendMessage);
}

void Heavy_epmk::cBinop_6shUWfeK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_IwQxvmku, 0, m, &cTabread_IwQxvmku_sendMessage);
}

void Heavy_epmk::cCast_LImbo4Nm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_OZprBq6r_sendMessage);
}

void Heavy_epmk::cBinop_bjPKSS0f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6shUWfeK, HV_BINOP_MIN, 1, m, &cBinop_6shUWfeK_sendMessage);
}

void Heavy_epmk::cSystem_46rWXYR6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_bjPKSS0f_sendMessage);
}

void Heavy_epmk::cMsg_PfAW8cWn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_46rWXYR6_sendMessage);
}

void Heavy_epmk::cVar_xdHEcu8b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PfAW8cWn_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_OZprBq6r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6shUWfeK, HV_BINOP_MIN, 0, m, &cBinop_6shUWfeK_sendMessage);
}

void Heavy_epmk::cTabread_IwQxvmku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wLkxhy4t, HV_BINOP_LOGICAL_AND, 0, m, &cBinop_wLkxhy4t_sendMessage);
}

void Heavy_epmk::cSwitchcase_6PjkeRwX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_P3USefwH, 0, m, &cSlice_P3USefwH_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3VsB0roJ_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LImbo4Nm_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cSlice_P3USefwH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_IwQxvmku, 1, m, &cTabread_IwQxvmku_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_IwQxvmku, 1, m, &cTabread_IwQxvmku_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_VZjy4quG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_sYmf35zl, 2, m, &cTabwrite_sYmf35zl_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_sYmf35zl, 2, m, &cTabwrite_sYmf35zl_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_i2zxDh3u_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VZjy4quG, 0, m, &cSlice_VZjy4quG_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_sYmf35zl, 0, m, &cTabwrite_sYmf35zl_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cTabwrite_sYmf35zl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cTabwrite_8mQi3qrD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSlice_69tEP9M3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_8mQi3qrD, 2, m, &cTabwrite_8mQi3qrD_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_8mQi3qrD, 2, m, &cTabwrite_8mQi3qrD_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_mMzxGbfC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_69tEP9M3, 0, m, &cSlice_69tEP9M3_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_8mQi3qrD, 0, m, &cTabwrite_8mQi3qrD_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_tLeGHieP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_BW3t3pth_sendMessage);
}

void Heavy_epmk::cSystem_qTpGgQmW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_NfYWIEPE_sendMessage);
}

void Heavy_epmk::cVar_u6KK5Vyl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gLVvxQ0r_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_BW3t3pth_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OjKpOVyn, HV_BINOP_MIN, 0, m, &cBinop_OjKpOVyn_sendMessage);
}

void Heavy_epmk::cMsg_gLVvxQ0r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qTpGgQmW_sendMessage);
}

void Heavy_epmk::cTabread_3WpnCrCj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0Swxqp0I_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_T2KiHMR2_sendMessage);
}

void Heavy_epmk::cCast_qTKaVUro_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_u6KK5Vyl, 0, m, &cVar_u6KK5Vyl_sendMessage);
}

void Heavy_epmk::cBinop_NfYWIEPE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OjKpOVyn, HV_BINOP_MIN, 1, m, &cBinop_OjKpOVyn_sendMessage);
}

void Heavy_epmk::cSlice_5SfGkucC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_3WpnCrCj, 1, m, &cTabread_3WpnCrCj_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_3WpnCrCj, 1, m, &cTabread_3WpnCrCj_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_nJqoOQ0q_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5SfGkucC, 0, m, &cSlice_5SfGkucC_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qTKaVUro_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tLeGHieP_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cBinop_OjKpOVyn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_3WpnCrCj, 0, m, &cTabread_3WpnCrCj_sendMessage);
}

void Heavy_epmk::cVar_fItqfZHl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GryMUfWU, HV_BINOP_LESS_THAN, 1, m, &cBinop_GryMUfWU_sendMessage);
}

void Heavy_epmk::cCast_aOqcVsEO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8JX0dzG6_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_wozekyNv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KuAcq5r7_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uXQN8H26_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KuAcq5r7_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uXQN8H26_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_FDR410bo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eVUsedbR_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3aRoqBV7_sendMessage);
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eVUsedbR_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3aRoqBV7_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_xfDUO7bf_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cSlice_onMessage(_c, &Context(_c)->cSlice_FDR410bo, 0, m, &cSlice_FDR410bo_sendMessage);
      break;
    }
    case 0x47BE8354: { // "clear"
      cSlice_onMessage(_c, &Context(_c)->cSlice_wozekyNv, 0, m, &cSlice_wozekyNv_sendMessage);
      break;
    }
    default: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_nWva1lel, 0, m, &cSlice_nWva1lel_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_Wmsn1lf7, 0, m, &cSlice_Wmsn1lf7_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cBinop_CA2rKWhC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ymkkBIIq, 1, m, &cIf_ymkkBIIq_sendMessage);
}

void Heavy_epmk::hTable_GJ7cS7QV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSend_piAHECcJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Lqz42fx7_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_t2Rl5Ell_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_wUb9OUel_sendMessage);
  cSend_xUDAsFPO_sendMessage(_c, 0, m);
}

void Heavy_epmk::cIf_nSWOAlC5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vi4TeAxO_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gVqNsdak_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KXuMiFUM_sendMessage);
      cPack_onMessage(_c, &Context(_c)->cPack_fBmId62d, 0, m, &cPack_fBmId62d_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cVar_Uphj5t3l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_fBmId62d, 1, m, &cPack_fBmId62d_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_Sfa3Ypdb, 1, m, &cPack_Sfa3Ypdb_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_GKyvT1CY_sendMessage);
}

void Heavy_epmk::hTable_xRdJ46as_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cCast_N5GjlN9o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xqCWpGCM, 0, m, &cVar_xqCWpGCM_sendMessage);
}

void Heavy_epmk::cVar_fYBjXPXT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t2Rl5Ell, HV_BINOP_MOD_UNIPOLAR, 0, m, &cBinop_t2Rl5Ell_sendMessage);
}

void Heavy_epmk::cCast_JlScygbf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_NYsyN3pL_sendMessage);
}

void Heavy_epmk::cCast_JJGZy3iC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JZ9BIwZH, 0, m, &cVar_JZ9BIwZH_sendMessage);
}

void Heavy_epmk::cBinop_NYsyN3pL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2VM8dVgS, HV_BINOP_MIN, 0, m, &cBinop_2VM8dVgS_sendMessage);
}

void Heavy_epmk::cSlice_an6hAxbf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_9FUPq3MS, 1, m, &cTabread_9FUPq3MS_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_9FUPq3MS, 1, m, &cTabread_9FUPq3MS_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_Ax4fw4mX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_an6hAxbf, 0, m, &cSlice_an6hAxbf_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JJGZy3iC_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JlScygbf_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cSystem_fDTk7tUl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_01dOyoU3_sendMessage);
}

void Heavy_epmk::cMsg_7xM9dR8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fDTk7tUl_sendMessage);
}

void Heavy_epmk::cVar_JZ9BIwZH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7xM9dR8E_sendMessage(_c, 0, m);
}

void Heavy_epmk::cTabread_9FUPq3MS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 1, m, &cPack_eJSMizEh_sendMessage);
}

void Heavy_epmk::cBinop_01dOyoU3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2VM8dVgS, HV_BINOP_MIN, 1, m, &cBinop_2VM8dVgS_sendMessage);
}

void Heavy_epmk::cBinop_2VM8dVgS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_9FUPq3MS, 0, m, &cTabread_9FUPq3MS_sendMessage);
}

void Heavy_epmk::cCast_VBGkHIoY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TLS5TnKm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XhaG9HKx_sendMessage);
}

void Heavy_epmk::cSend_VhFc0Y3f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jRvkrjxS_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSystem_W4Cqsgb6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_PM9GatVJ_sendMessage);
}

void Heavy_epmk::cCast_PU82LcWS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_cwRdqteU_sendMessage);
}

void Heavy_epmk::cBinop_cwRdqteU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uKMdvjzk, HV_BINOP_MIN, 0, m, &cBinop_uKMdvjzk_sendMessage);
}

void Heavy_epmk::cBinop_uKMdvjzk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_ZZMgtfTn, 0, m, &cTabread_ZZMgtfTn_sendMessage);
}

void Heavy_epmk::cVar_fb668yC5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7NuNbL6f_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_PM9GatVJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uKMdvjzk, HV_BINOP_MIN, 1, m, &cBinop_uKMdvjzk_sendMessage);
}

void Heavy_epmk::cTabread_ZZMgtfTn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_NEQ, 0.0f, 0, m, &cBinop_ZBVgbufh_sendMessage);
}

void Heavy_epmk::cSlice_7V2787w3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_ZZMgtfTn, 1, m, &cTabread_ZZMgtfTn_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_ZZMgtfTn, 1, m, &cTabread_ZZMgtfTn_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_FEILXl8y_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_7V2787w3, 0, m, &cSlice_7V2787w3_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IEJMTueb_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PU82LcWS_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_IEJMTueb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fb668yC5, 0, m, &cVar_fb668yC5_sendMessage);
}

void Heavy_epmk::cMsg_7NuNbL6f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_W4Cqsgb6_sendMessage);
}

void Heavy_epmk::cSend_kwuouDfC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jRvkrjxS_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_y8cEFUNX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RWLAaA7x_sendMessage);
}

void Heavy_epmk::cBinop_ZBVgbufh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_FvyA74ZQ, 1, m, &cIf_FvyA74ZQ_sendMessage);
}

void Heavy_epmk::cCast_XhaG9HKx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2HeapM6o_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_4QNmR6Rf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8x49qFFz_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_lt7uoEqr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_rR8aKOSl, 0, m, &cVar_rR8aKOSl_sendMessage);
}

void Heavy_epmk::cBinop_R0rX2QoL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Fu0j82lf, 1, m, &cIf_Fu0j82lf_sendMessage);
}

void Heavy_epmk::cIf_Fu0j82lf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_MYHmpTyO_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_9KsHhpsg_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cUnop_9KsHhpsg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_z34almZ9_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_l4f43Mrn, 0, m, &cIf_l4f43Mrn_sendMessage);
}

void Heavy_epmk::cVar_USDnH1Lg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_R0rX2QoL_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_Fu0j82lf, 0, m, &cIf_Fu0j82lf_sendMessage);
}

void Heavy_epmk::cUnop_MYHmpTyO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN_EQL, 1.0f, 0, m, &cBinop_z34almZ9_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_l4f43Mrn, 0, m, &cIf_l4f43Mrn_sendMessage);
}

void Heavy_epmk::cBinop_sJBkCmoL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rR8aKOSl, 0, m, &cVar_rR8aKOSl_sendMessage);
}

void Heavy_epmk::cCast_dh1vLKI5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AObPYw95, HV_BINOP_LESS_THAN, 1, m, &cBinop_AObPYw95_sendMessage);
}

void Heavy_epmk::cCast_4FldR3S0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_kMQfEkg1, 0, m, &cIf_kMQfEkg1_sendMessage);
}

void Heavy_epmk::cBinop_z34almZ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_l4f43Mrn, 1, m, &cIf_l4f43Mrn_sendMessage);
}

void Heavy_epmk::cIf_l4f43Mrn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dh1vLKI5_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8GDDqN4K_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_fTJft2HH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_sJBkCmoL_sendMessage);
}

void Heavy_epmk::cBinop_AObPYw95_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_kMQfEkg1, 1, m, &cIf_kMQfEkg1_sendMessage);
}

void Heavy_epmk::cVar_rR8aKOSl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lKZxdM1P_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4FldR3S0_sendMessage);
}

void Heavy_epmk::cCast_KL1N453F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TI6C9PBY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TRE5JA1k_sendMessage);
}

void Heavy_epmk::cIf_kMQfEkg1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KL1N453F_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fTJft2HH_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_8GDDqN4K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lt7uoEqr_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_lKZxdM1P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AObPYw95, HV_BINOP_LESS_THAN, 0, m, &cBinop_AObPYw95_sendMessage);
}

void Heavy_epmk::cIf_FvyA74ZQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4QNmR6Rf_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_s9ybI2Zo_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_y8cEFUNX_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VBGkHIoY_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eq76F2dg_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cVar_gtY0wCII_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_USDnH1Lg, 0, m, &cVar_USDnH1Lg_sendMessage);
}

void Heavy_epmk::cCast_3aRoqBV7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gtY0wCII, 0, m, &cVar_gtY0wCII_sendMessage);
}

void Heavy_epmk::cCast_s9ybI2Zo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Ax4fw4mX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_TLS5TnKm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_CmEM0VeY, 1, m, &cTabwrite_CmEM0VeY_sendMessage);
}

void Heavy_epmk::cMsg_1zTgUm3j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSend_kwuouDfC_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_TI6C9PBY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_FEILXl8y_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_8x49qFFz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 2, m, &cPack_eJSMizEh_sendMessage);
}

void Heavy_epmk::cMsg_2HeapM6o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSwitchcase_CqmcHwo3_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_TRE5JA1k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_FvyA74ZQ, 0, m, &cIf_FvyA74ZQ_sendMessage);
}

void Heavy_epmk::cCast_eq76F2dg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_VhFc0Y3f_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_JcOW5NXo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_CmEM0VeY, 2, m, &cTabwrite_CmEM0VeY_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_CmEM0VeY, 2, m, &cTabwrite_CmEM0VeY_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_CqmcHwo3_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_JcOW5NXo, 0, m, &cSlice_JcOW5NXo_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_CmEM0VeY, 0, m, &cTabwrite_CmEM0VeY_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cTabwrite_CmEM0VeY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cCast_eVUsedbR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1zTgUm3j_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_RWLAaA7x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_eJSMizEh, 0, m, &cPack_eJSMizEh_sendMessage);
}

void Heavy_epmk::hTable_wf984nPp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSend_lSgYL2Hf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_COXvsMtn_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_wUb9OUel_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fYBjXPXT, 1, m, &cVar_fYBjXPXT_sendMessage);
}

void Heavy_epmk::cCast_0imBWJsV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DGa5dUO9_sendMessage(_c, 0, m);
}

void Heavy_epmk::cIf_ymkkBIIq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cPack_onMessage(_c, &Context(_c)->cPack_Sfa3Ypdb, 0, m, &cPack_Sfa3Ypdb_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cVar_xqCWpGCM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_NEQ, 0.0f, 0, m, &cBinop_vynuW6cG_sendMessage);
}

void Heavy_epmk::cBinop_cfJqQb4N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zCrFWpBp, 0, m, &cVar_zCrFWpBp_sendMessage);
}

void Heavy_epmk::cMsg_SkN1uxXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_viMSxIAM, HV_BINOP_POW, 0, m, &cBinop_viMSxIAM_sendMessage);
}

void Heavy_epmk::cBinop_hlDWbS1U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_S5YQdS2Q_sendMessage);
}

void Heavy_epmk::cBinop_pV5hV5pq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XsR5HQTG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_c7vsOkqq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XJpdSIBT_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_JDXqhQVq, 0, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_XaDCaID4, m);
}

void Heavy_epmk::cBinop_viMSxIAM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_pV5hV5pq_sendMessage);
}

void Heavy_epmk::cBinop_S5YQdS2Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_viMSxIAM, HV_BINOP_POW, 1, m, &cBinop_viMSxIAM_sendMessage);
  cMsg_SkN1uxXr_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_prD61STo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_X2Xuahbi_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_XJpdSIBT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3BxUo0oc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_prD61STo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_znqqfHau_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7kfpLztC_sendMessage);
}

void Heavy_epmk::cDelay_SQ7L0q00_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_SQ7L0q00, m);
  cMsg_yOaANHfW_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_CaH2jh7O_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_QOq209ub_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_QOq209ub_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_SQ7L0q00, 1, m, &cDelay_SQ7L0q00_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2GqBsJyA_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_QOq209ub_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_SQ7L0q00, 0, m, &cDelay_SQ7L0q00_sendMessage);
}

void Heavy_epmk::cCast_2GqBsJyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_SQ7L0q00, 0, m, &cDelay_SQ7L0q00_sendMessage);
}

void Heavy_epmk::cPack_Uutd3Jvu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LaS3Khs1_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_OD9xKwP7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_BCWijM10_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NQBQ655D_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XPnAtK86_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YyCnZu92_sendMessage);
  cSwitchcase_7NqErg1M_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_dSHzJ3qz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OD9xKwP7_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cCast_XsR5HQTG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LWsJKzdr_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_ItINTlZ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BUZjGhsw_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_TbdTdTXc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_7NercEro_sendMessage);
}

void Heavy_epmk::cBinop_RAJxGBXR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Uutd3Jvu, 1, m, &cPack_Uutd3Jvu_sendMessage);
}

void Heavy_epmk::cBinop_DS0S3jjG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_MtPSQZPT, 1, m, &cPack_MtPSQZPT_sendMessage);
}

void Heavy_epmk::cMsg_jRwY2fSy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20000.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_VmNJ3HwZ, 0, m, NULL);
}

void Heavy_epmk::cCast_7kfpLztC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_grW6oSeu_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_yOaANHfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_hGKcjT7r, 0, m, NULL);
}

void Heavy_epmk::cMsg_e2hDSH0C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_QztqMhTJ_sendMessage);
}

void Heavy_epmk::cMsg_3aYWOGHl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_bBHw7djf, 0, m, &cDelay_bBHw7djf_sendMessage);
}

void Heavy_epmk::cDelay_bBHw7djf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_bBHw7djf, m);
  cMsg_rfrcs6w3_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_ADyXEcWF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_3aYWOGHl_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_3aYWOGHl_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_bBHw7djf, 1, m, &cDelay_bBHw7djf_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Buqpp3iN_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_Buqpp3iN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_bBHw7djf, 0, m, &cDelay_bBHw7djf_sendMessage);
}

void Heavy_epmk::cCast_BCWijM10_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_CaH2jh7O_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSlice_RHOPc1Rl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_Ojo1eBUm_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_PTQdF5Cc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_M8SHGKY9, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_fSC2pVW8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qab7oHpm, 1, m, &cIf_qab7oHpm_sendMessage);
}

void Heavy_epmk::cBinop_RmnUhGtP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_dSPcnvbq_sendMessage);
}

void Heavy_epmk::cBinop_UquZ6ERU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Vecj9a2Y, m);
}

void Heavy_epmk::cMsg_Ur8hJfnl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Vecj9a2Y, m);
}

void Heavy_epmk::cMsg_e55suBwj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_UquZ6ERU, HV_BINOP_POW, 0, m, &cBinop_UquZ6ERU_sendMessage);
}

void Heavy_epmk::cIf_qab7oHpm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_Ur8hJfnl_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_GtW08H0y_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_dSPcnvbq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UquZ6ERU, HV_BINOP_POW, 1, m, &cBinop_UquZ6ERU_sendMessage);
  cMsg_e55suBwj_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_Ej6KhxWq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_fSC2pVW8_sendMessage);
}

void Heavy_epmk::cBinop_GtW08H0y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_RmnUhGtP_sendMessage);
}

void Heavy_epmk::cCast_45UNcgVO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qab7oHpm, 0, m, &cIf_qab7oHpm_sendMessage);
}

void Heavy_epmk::cPack_MtPSQZPT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Moohl8zO_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSystem_P5QolsqV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jSYRcpmm, m);
}

void Heavy_epmk::cMsg_enisyEec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_P5QolsqV_sendMessage);
}

void Heavy_epmk::cCast_YyCnZu92_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_19zsj9b5_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_t7PaQq0j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1aHRJufc_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_dxoKXZrP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_dxoKXZrP, m);
  cPack_onMessage(_c, &Context(_c)->cPack_UjX5JuhO, 0, m, &cPack_UjX5JuhO_sendMessage);
}

void Heavy_epmk::cCast_Si0tSPex_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_MtPSQZPT, 0, m, &cPack_MtPSQZPT_sendMessage);
}

void Heavy_epmk::cCast_o4SQen4t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_e2hDSH0C_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_CFRs6906_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_CFRs6906, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_uSlnyc1T_sendMessage);
}

void Heavy_epmk::cBinop_V6cy5uEv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t7PaQq0j_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_o4SQen4t_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Si0tSPex_sendMessage);
}

void Heavy_epmk::cBinop_tMSVCSKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_V6cy5uEv_sendMessage);
}

void Heavy_epmk::cBinop_nNSXEuWy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_8L5TpySL_sendMessage);
}

void Heavy_epmk::cBinop_8L5TpySL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tMSVCSKv, HV_BINOP_POW, 1, m, &cBinop_tMSVCSKv_sendMessage);
  cMsg_YRNPoUvJ_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_YRNPoUvJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_tMSVCSKv, HV_BINOP_POW, 0, m, &cBinop_tMSVCSKv_sendMessage);
}

void Heavy_epmk::cMsg_jyYAqVz8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.1f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Zv9HHj5p, 0, m, &cSlice_Zv9HHj5p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JiR4EoAl, 0, m, &cSlice_JiR4EoAl_sendMessage);
}

void Heavy_epmk::cCast_GuMmV2Dg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_lU6Y2uJ5, 0, m, &cDelay_lU6Y2uJ5_sendMessage);
}

void Heavy_epmk::cMsg_l3GQWX7d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_lU6Y2uJ5, 0, m, &cDelay_lU6Y2uJ5_sendMessage);
}

void Heavy_epmk::cSwitchcase_grW6oSeu_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_l3GQWX7d_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_l3GQWX7d_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_lU6Y2uJ5, 1, m, &cDelay_lU6Y2uJ5_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GuMmV2Dg_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_lU6Y2uJ5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_lU6Y2uJ5, m);
  cPack_onMessage(_c, &Context(_c)->cPack_Uutd3Jvu, 0, m, &cPack_Uutd3Jvu_sendMessage);
}

void Heavy_epmk::cMsg_LWsJKzdr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2048.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DS0S3jjG, HV_BINOP_MULTIPLY, 1, m, &cBinop_DS0S3jjG_sendMessage);
}

void Heavy_epmk::cMsg_mTaanWgf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_JDXqhQVq, 1, m);
}

void Heavy_epmk::cSlice_JiR4EoAl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_pR90ZDCP, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_Zv9HHj5p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_EhykdNjI_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_HPHHmCSD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -30.0f, 0, m, &cBinop_TbdTdTXc_sendMessage);
}

void Heavy_epmk::cCast_znqqfHau_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fX71ypMT_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_1aHRJufc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DS0S3jjG, HV_BINOP_MULTIPLY, 1, m, &cBinop_DS0S3jjG_sendMessage);
}

void Heavy_epmk::cMsg_C7Vuj35u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_mYfmPRby_sendMessage);
}

void Heavy_epmk::cBinop_H7t1McKx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_UgMhdkom_sendMessage);
}

void Heavy_epmk::cBinop_mYfmPRby_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H7t1McKx, HV_BINOP_MULTIPLY, 1, m, &cBinop_H7t1McKx_sendMessage);
}

void Heavy_epmk::cSystem_DZRGurDZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_C7Vuj35u_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_hDejEOJQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DZRGurDZ_sendMessage);
}

void Heavy_epmk::cBinop_Zy9uqH0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bguGqCmV, m);
}

void Heavy_epmk::cBinop_570tvHtb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Zy9uqH0N_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_xJGitJ0K, m);
}

void Heavy_epmk::cBinop_UgMhdkom_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_570tvHtb_sendMessage);
}

void Heavy_epmk::cVar_yQMexrae_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H7t1McKx, HV_BINOP_MULTIPLY, 0, m, &cBinop_H7t1McKx_sendMessage);
}

void Heavy_epmk::cMsg_Moohl8zO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_Zv9HHj5p, 0, m, &cSlice_Zv9HHj5p_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_JiR4EoAl, 0, m, &cSlice_JiR4EoAl_sendMessage);
}

void Heavy_epmk::cBinop_QztqMhTJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DS0S3jjG, HV_BINOP_MULTIPLY, 0, m, &cBinop_DS0S3jjG_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 128.0f, 0, m, &cBinop_RAJxGBXR_sendMessage);
}

void Heavy_epmk::cSlice_W9Gi37CH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_dxoKXZrP, 0, m, &cDelay_dxoKXZrP_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_9sk9BPoc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_4rXr99CE_sendMessage);
      cSwitchcase_APbKq0qB_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_uSlnyc1T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 126.0f, 0, m, &cBinop_ItINTlZ1_sendMessage);
}

void Heavy_epmk::cCast_suhJISAh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSwitchcase_APbKq0qB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_suhJISAh_sendMessage);
      break;
    }
    default: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_CFRs6906, 0, m, &cDelay_CFRs6906_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_elQc8IQL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_iOCZG8M2_sendMessage);
}

void Heavy_epmk::cSystem_iOCZG8M2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_euAj5M4f, m);
}

void Heavy_epmk::cDelay_8xX71lVk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_8xX71lVk, m);
  cMsg_jRwY2fSy_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_VthNpfkQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_8xX71lVk, 0, m, &cDelay_8xX71lVk_sendMessage);
}

void Heavy_epmk::cSwitchcase_19zsj9b5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_VthNpfkQ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_VthNpfkQ_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_8xX71lVk, 1, m, &cDelay_8xX71lVk_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_j210rEoa_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_j210rEoa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_8xX71lVk, 0, m, &cDelay_8xX71lVk_sendMessage);
}

void Heavy_epmk::cSlice_8dhTOXoJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_hlDWbS1U_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_hlDWbS1U_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_opll0TTS_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8dhTOXoJ, 0, m, &cSlice_8dhTOXoJ_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_h8NRnQ5f, 0, m, &cSlice_h8NRnQ5f_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_h8NRnQ5f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_nNSXEuWy_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_nNSXEuWy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_qfPhTSzF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_opll0TTS_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_TCmWVjZG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_IhkoKzWe, m);
}

void Heavy_epmk::cVar_zCrFWpBp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ifaa5WD7, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ifaa5WD7_sendMessage);
}

void Heavy_epmk::cBinop_ooJDQLXg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_TCmWVjZG_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_764z0Jl6, m);
}

void Heavy_epmk::cBinop_HrMIpmjv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ooJDQLXg_sendMessage);
}

void Heavy_epmk::cBinop_SNjWHKEp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ifaa5WD7, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ifaa5WD7_sendMessage);
}

void Heavy_epmk::cMsg_5qS3xzyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_A3fuDsCa_sendMessage);
}

void Heavy_epmk::cSystem_A3fuDsCa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4NWy2HXr_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_Ifaa5WD7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_HrMIpmjv_sendMessage);
}

void Heavy_epmk::cMsg_4NWy2HXr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_SNjWHKEp_sendMessage);
}

void Heavy_epmk::cBinop_7NercEro_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ej6KhxWq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_45UNcgVO_sendMessage);
}

void Heavy_epmk::cMsg_BUZjGhsw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_HPHHmCSD_sendMessage);
}

void Heavy_epmk::cMsg_rfrcs6w3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_VmNJ3HwZ, 0, m, NULL);
}

void Heavy_epmk::cMsg_LaS3Khs1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RHOPc1Rl, 0, m, &cSlice_RHOPc1Rl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PTQdF5Cc, 0, m, &cSlice_PTQdF5Cc_sendMessage);
}

void Heavy_epmk::cCast_3BxUo0oc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jyYAqVz8_sendMessage(_c, 0, m);
}

void Heavy_epmk::cPack_UjX5JuhO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qfPhTSzF_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_XPRP1Ss2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_XPRP1Ss2, m);
  cPack_onMessage(_c, &Context(_c)->cPack_MtPSQZPT, 0, m, &cPack_MtPSQZPT_sendMessage);
}

void Heavy_epmk::cSwitchcase_X2Xuahbi_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_r5m2NboA_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_r5m2NboA_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_XPRP1Ss2, 1, m, &cDelay_XPRP1Ss2_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eNWRlhC0_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_r5m2NboA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_XPRP1Ss2, 0, m, &cDelay_XPRP1Ss2_sendMessage);
}

void Heavy_epmk::cCast_eNWRlhC0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_XPRP1Ss2, 0, m, &cDelay_XPRP1Ss2_sendMessage);
}

void Heavy_epmk::cCast_NQBQ655D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sJ6MVgsf_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_sJ6MVgsf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 1.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_hGKcjT7r, 0, m, NULL);
}

void Heavy_epmk::cBinop_4rXr99CE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_dSHzJ3qz_onMessage(_c, NULL, 0, m, NULL);
  cPack_onMessage(_c, &Context(_c)->cPack_UjX5JuhO, 1, m, &cPack_UjX5JuhO_sendMessage);
}

void Heavy_epmk::cBinop_1TF8Sc1d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yQMexrae, 0, m, &cVar_yQMexrae_sendMessage);
}

void Heavy_epmk::cMsg_fX71ypMT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 1.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RHOPc1Rl, 0, m, &cSlice_RHOPc1Rl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PTQdF5Cc, 0, m, &cSlice_PTQdF5Cc_sendMessage);
}

void Heavy_epmk::cMsg_nXxdS2MZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_8OB7YwrF, 0, m, &cDelay_8OB7YwrF_sendMessage);
}

void Heavy_epmk::cCast_ULxneIor_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_8OB7YwrF, 0, m, &cDelay_8OB7YwrF_sendMessage);
}

void Heavy_epmk::cSwitchcase_7NqErg1M_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_nXxdS2MZ_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_nXxdS2MZ_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_8OB7YwrF, 1, m, &cDelay_8OB7YwrF_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ULxneIor_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_8OB7YwrF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_8OB7YwrF, m);
  cMsg_mTaanWgf_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_c7vsOkqq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_e2hDSH0C_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_roDsiXn2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 50.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_RHOPc1Rl, 0, m, &cSlice_RHOPc1Rl_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_PTQdF5Cc, 0, m, &cSlice_PTQdF5Cc_sendMessage);
}

void Heavy_epmk::cMsg_Ojo1eBUm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_cfJqQb4N_sendMessage);
}

void Heavy_epmk::cCast_XPnAtK86_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ADyXEcWF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_EhykdNjI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1TF8Sc1d_sendMessage);
}

void Heavy_epmk::cSwitchcase_VToucUvD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x40E00000: { // "7.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_FykAxBxn, 0, m, &cSlice_FykAxBxn_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_FykAxBxn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_6La5XOFv, 0, m, &cSlice_6La5XOFv_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_OUgEFKK3, 0, m, &cSlice_OUgEFKK3_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_6La5XOFv, 0, m, &cSlice_6La5XOFv_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_OUgEFKK3, 0, m, &cSlice_OUgEFKK3_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cReceive_Dg9INgDk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_enisyEec_sendMessage(_c, 0, m);
  cMsg_elQc8IQL_sendMessage(_c, 0, m);
  cMsg_4QMGNrEf_sendMessage(_c, 0, m);
  cMsg_Pp9pqbns_sendMessage(_c, 0, m);
  cMsg_UXi2A7kG_sendMessage(_c, 0, m);
  cMsg_pNu16LYV_sendMessage(_c, 0, m);
  cMsg_kbsflaqA_sendMessage(_c, 0, m);
  cMsg_IUgUH8r8_sendMessage(_c, 0, m);
  cMsg_J4klaWjZ_sendMessage(_c, 0, m);
  cMsg_RpJdPFes_sendMessage(_c, 0, m);
  cMsg_sK9ZgBj3_sendMessage(_c, 0, m);
  cMsg_kQYokZj8_sendMessage(_c, 0, m);
  cMsg_rbljJDWa_sendMessage(_c, 0, m);
  cMsg_PGHsE242_sendMessage(_c, 0, m);
  cMsg_QYnXFwtS_sendMessage(_c, 0, m);
  cMsg_HIUBVq8Q_sendMessage(_c, 0, m);
  cMsg_hDejEOJQ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_yQMexrae, 0, m, &cVar_yQMexrae_sendMessage);
  cMsg_5qS3xzyq_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_zCrFWpBp, 0, m, &cVar_zCrFWpBp_sendMessage);
  cMsg_JTe568GJ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_x3iQ9qJN, 0, m, &cVar_x3iQ9qJN_sendMessage);
  cMsg_vRWzmAOd_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_jBuj356V, 0, m, &cVar_jBuj356V_sendMessage);
  cMsg_yb5I9s83_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_X2Lfk4Gv, 0, m, &cVar_X2Lfk4Gv_sendMessage);
  cMsg_EAJ6GaCE_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_5SBP51i2, 0, m, &cVar_5SBP51i2_sendMessage);
  cMsg_OfBlMUmS_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_KfllLE13, 0, m, &cVar_KfllLE13_sendMessage);
  cMsg_KNhQewg2_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_PhF2RIQT, 0, m, &cVar_PhF2RIQT_sendMessage);
  cMsg_2UFRW87F_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_aKVVRGmA, 0, m, &cVar_aKVVRGmA_sendMessage);
  cMsg_2thmlUS4_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_s2q2QuIa, 0, m, &cVar_s2q2QuIa_sendMessage);
  cMsg_zHoZ8LQq_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gehgD4Pu, 0, m, &cVar_gehgD4Pu_sendMessage);
  cMsg_GFCjmW7q_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_H8QR8Ihu, 0, m, &cVar_H8QR8Ihu_sendMessage);
  cMsg_OVfTKafp_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_boi8ORcx, 0, m, &cVar_boi8ORcx_sendMessage);
  cMsg_zWVGFbfK_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_w4FPwqDt, 0, m, &cVar_w4FPwqDt_sendMessage);
  cMsg_KrvQx77Q_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_uVInNTaE, 0, m, &cVar_uVInNTaE_sendMessage);
  cMsg_DflNblco_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_jRxwGNjG, 0, m, &cVar_jRxwGNjG_sendMessage);
  cMsg_wdGnbeWM_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_2ALbBIKV, 0, m, &cVar_2ALbBIKV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0imBWJsV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_N5GjlN9o_sendMessage);
}

void Heavy_epmk::cSlice_YzkaQmL7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_MmXiOaKc, 0, m, &cSlice_MmXiOaKc_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_FGDpJOVq, 0, m, &cSlice_FGDpJOVq_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_MmXiOaKc, 0, m, &cSlice_MmXiOaKc_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_FGDpJOVq, 0, m, &cSlice_FGDpJOVq_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_TWjwgyOo_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x40A00000: { // "5.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YzkaQmL7, 0, m, &cSlice_YzkaQmL7_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cCast_LJLvnP7W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_95cWyDDs_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_46yfNsDK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_46yfNsDK, m);
  cPack_onMessage(_c, &Context(_c)->cPack_I7mtl1jZ, 0, m, &cPack_I7mtl1jZ_sendMessage);
}

void Heavy_epmk::cBinop_UwlKs7X8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_COu6A1mq_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_CJ4NK7ni_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_cuKLPSuL_sendMessage);
}

void Heavy_epmk::cMsg_EAJ6GaCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sdSCuHIm_sendMessage);
}

void Heavy_epmk::cSystem_sdSCuHIm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CJ4NK7ni_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_ACUmKHWE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_yWhzPIv3_sendMessage);
}

void Heavy_epmk::cBinop_cuKLPSuL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ACUmKHWE, HV_BINOP_MULTIPLY, 1, m, &cBinop_ACUmKHWE_sendMessage);
}

void Heavy_epmk::cVar_5SBP51i2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ACUmKHWE, HV_BINOP_MULTIPLY, 0, m, &cBinop_ACUmKHWE_sendMessage);
}

void Heavy_epmk::cBinop_vD5tpWT0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_mwAoAELZ, m);
}

void Heavy_epmk::cBinop_yWhzPIv3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_6ydyjkHV_sendMessage);
}

void Heavy_epmk::cBinop_6ydyjkHV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_vD5tpWT0_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_M02YIJJ3, m);
}

void Heavy_epmk::cCast_GwIaYzdO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WZyGiwbR_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_8BNbA90N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EY5wl9kb_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_FyGP7w3X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_U4MAmSWt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSlice_WRhJjbFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_gHY599VG_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_doCNcPW6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_myaMYuBU, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_U8tuTIQV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v6YfBjgr, HV_BINOP_MULTIPLY, 0, m, &cBinop_v6YfBjgr_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 128.0f, 0, m, &cBinop_lTOYggBk_sendMessage);
}

void Heavy_epmk::cBinop_sFy8VD8N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_D2bvA1TZ, HV_BINOP_POW, 1, m, &cBinop_D2bvA1TZ_sendMessage);
  cMsg_p8TC2IzL_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_TqPsdxb5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_sFy8VD8N_sendMessage);
}

void Heavy_epmk::cMsg_p8TC2IzL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_D2bvA1TZ, HV_BINOP_POW, 0, m, &cBinop_D2bvA1TZ_sendMessage);
}

void Heavy_epmk::cBinop_D2bvA1TZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_jL4BLg56_sendMessage);
}

void Heavy_epmk::cBinop_jL4BLg56_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LJLvnP7W_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_L51up8li_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nbs3l2ZM_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_cEnzzTRl, 0, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_He7BfjGj, m);
}

void Heavy_epmk::cMsg_aOFVxZ4C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 1.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Gi8YR2TJ, 0, m, NULL);
}

void Heavy_epmk::cBinop_BWbJjO29_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 126.0f, 0, m, &cBinop_UwlKs7X8_sendMessage);
}

void Heavy_epmk::cCast_epyhassq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aOFVxZ4C_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_zJHWDtcf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -30.0f, 0, m, &cBinop_LK6lGAk7_sendMessage);
}

void Heavy_epmk::cMsg_xsc5bQ36_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_Mzyvkulc_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_L51up8li_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EY5wl9kb_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_ZfzLjhRs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_QlgM4Ucx_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_fhT7RVqX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_5vGdov68_sendMessage);
}

void Heavy_epmk::cMsg_6N9OQnr9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fhT7RVqX, HV_BINOP_POW, 0, m, &cBinop_fhT7RVqX_sendMessage);
}

void Heavy_epmk::cBinop_trngKsO7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_ohjomZs8_sendMessage);
}

void Heavy_epmk::cBinop_5vGdov68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CcPDrMMj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8BNbA90N_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GWKqx7Ur_sendMessage);
}

void Heavy_epmk::cBinop_ohjomZs8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fhT7RVqX, HV_BINOP_POW, 1, m, &cBinop_fhT7RVqX_sendMessage);
  cMsg_6N9OQnr9_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_LZSTZJoc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_NmOMFEb5_sendMessage);
}

void Heavy_epmk::cBinop_NmOMFEb5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_G07ZJy66_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_vnM2GfIV, m);
}

void Heavy_epmk::cBinop_G07ZJy66_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_hwjjwIAe, m);
}

void Heavy_epmk::cBinop_7FXdSrws_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_LZSTZJoc_sendMessage);
}

void Heavy_epmk::cSystem_rGX2Ui4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uoXW3OAC_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_yb5I9s83_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rGX2Ui4P_sendMessage);
}

void Heavy_epmk::cMsg_uoXW3OAC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Cd48fLLI_sendMessage);
}

void Heavy_epmk::cBinop_Cd48fLLI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7FXdSrws, HV_BINOP_MULTIPLY, 1, m, &cBinop_7FXdSrws_sendMessage);
}

void Heavy_epmk::cVar_X2Lfk4Gv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7FXdSrws, HV_BINOP_MULTIPLY, 0, m, &cBinop_7FXdSrws_sendMessage);
}

void Heavy_epmk::cSwitchcase_8jiKwve0_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_5sZMe8aM_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_5sZMe8aM_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_RIKOkelr, 1, m, &cDelay_RIKOkelr_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pIwFtm82_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_RIKOkelr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_RIKOkelr, m);
  cMsg_jQBrT9N7_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_pIwFtm82_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_RIKOkelr, 0, m, &cDelay_RIKOkelr_sendMessage);
}

void Heavy_epmk::cMsg_5sZMe8aM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_RIKOkelr, 0, m, &cDelay_RIKOkelr_sendMessage);
}

void Heavy_epmk::cCast_CcPDrMMj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LnkxSa56_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_haNz4gC8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_haNz4gC8, m);
  cMsg_dt8peNkw_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_QlgM4Ucx_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_7z1x5maC_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_7z1x5maC_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_haNz4gC8, 1, m, &cDelay_haNz4gC8_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JUa6y4t6_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_7z1x5maC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_haNz4gC8, 0, m, &cDelay_haNz4gC8_sendMessage);
}

void Heavy_epmk::cCast_JUa6y4t6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_haNz4gC8, 0, m, &cDelay_haNz4gC8_sendMessage);
}

void Heavy_epmk::cBinop_v6YfBjgr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_anxjdzZ0, 1, m, &cPack_anxjdzZ0_sendMessage);
}

void Heavy_epmk::cCast_16iJHYjV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_OgxqSSyJ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_EY5wl9kb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_U8tuTIQV_sendMessage);
}

void Heavy_epmk::cMsg_dt8peNkw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Gi8YR2TJ, 0, m, NULL);
}

void Heavy_epmk::cCast_zMXNuqTp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Bo9hJHZy_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_lTOYggBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_TVhYke5E, 1, m, &cPack_TVhYke5E_sendMessage);
}

void Heavy_epmk::cDelay_LY8mohhO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_LY8mohhO, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_BWbJjO29_sendMessage);
}

void Heavy_epmk::cMsg_qIeqB8Yt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_t4T5cABs_sendMessage);
}

void Heavy_epmk::cCast_WGkgghZd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ucfJertk, 0, m, &cDelay_ucfJertk_sendMessage);
}

void Heavy_epmk::cDelay_ucfJertk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ucfJertk, m);
  cMsg_cm8ETUNC_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_sWs8LXCr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ucfJertk, 0, m, &cDelay_ucfJertk_sendMessage);
}

void Heavy_epmk::cSwitchcase_AE8UWsda_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_sWs8LXCr_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_sWs8LXCr_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_ucfJertk, 1, m, &cDelay_ucfJertk_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WGkgghZd_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_S14F0SQL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZfzLjhRs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_epyhassq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rhV2jZl0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_O9l3EQCC_sendMessage);
  cSwitchcase_AE8UWsda_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_dcByCQzs_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S14F0SQL_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cBinop_t4T5cABs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_X2Lfk4Gv, 0, m, &cVar_X2Lfk4Gv_sendMessage);
}

void Heavy_epmk::cMsg_gHY599VG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_JvM4z8SI_sendMessage);
}

void Heavy_epmk::cMsg_COu6A1mq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_zJHWDtcf_sendMessage);
}

void Heavy_epmk::cCast_0SkXo3dT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSwitchcase_YthooAC6_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0SkXo3dT_sendMessage);
      break;
    }
    default: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_LY8mohhO, 0, m, &cDelay_LY8mohhO_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_jQBrT9N7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20000.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LEGR74Q9, 0, m, NULL);
}

void Heavy_epmk::cPack_TVhYke5E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mRSk44O6_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_sBfdQmam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_sBfdQmam, m);
  cMsg_SlkivWYy_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_Oj6tdVwc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_sBfdQmam, 0, m, &cDelay_sBfdQmam_sendMessage);
}

void Heavy_epmk::cMsg_7Dhom0wq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_sBfdQmam, 0, m, &cDelay_sBfdQmam_sendMessage);
}

void Heavy_epmk::cSwitchcase_sYaTUsVE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_7Dhom0wq_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_7Dhom0wq_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_sBfdQmam, 1, m, &cDelay_sBfdQmam_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Oj6tdVwc_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_LnkxSa56_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_v6YfBjgr, HV_BINOP_MULTIPLY, 1, m, &cBinop_v6YfBjgr_sendMessage);
}

void Heavy_epmk::cCast_O9l3EQCC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_8jiKwve0_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_Xalk42Fq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5fK9m9hF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_APIvl2QI_sendMessage);
}

void Heavy_epmk::cSlice_WkvTCDax_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_trngKsO7_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_trngKsO7_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_Mzyvkulc_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Tv9HtyQT, 0, m, &cSlice_Tv9HtyQT_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_WkvTCDax, 0, m, &cSlice_WkvTCDax_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_Tv9HtyQT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_TqPsdxb5_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_TqPsdxb5_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_v1MgTGmL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_dcByCQzs_onMessage(_c, NULL, 0, m, NULL);
  cPack_onMessage(_c, &Context(_c)->cPack_I7mtl1jZ, 1, m, &cPack_I7mtl1jZ_sendMessage);
}

void Heavy_epmk::cSlice_lXXyNwwZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_ynMMAGA3, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_LbU9nL2y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_qIeqB8Yt_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_SlkivWYy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LEGR74Q9, 0, m, NULL);
}

void Heavy_epmk::cPack_I7mtl1jZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xsc5bQ36_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_LK6lGAk7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_Xalk42Fq_sendMessage);
}

void Heavy_epmk::cSystem_cHfyJ4B2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VioDJkD5, m);
}

void Heavy_epmk::cMsg_UXi2A7kG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cHfyJ4B2_sendMessage);
}

void Heavy_epmk::cPack_anxjdzZ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_I6x1V25C_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_WZyGiwbR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 1.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WRhJjbFK, 0, m, &cSlice_WRhJjbFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_doCNcPW6, 0, m, &cSlice_doCNcPW6_sendMessage);
}

void Heavy_epmk::cSwitchcase_OgxqSSyJ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_gWr3MAI9_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_gWr3MAI9_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_X5qFEIvw, 1, m, &cDelay_X5qFEIvw_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4J9WKnTX_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_X5qFEIvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_X5qFEIvw, m);
  cPack_onMessage(_c, &Context(_c)->cPack_TVhYke5E, 0, m, &cPack_TVhYke5E_sendMessage);
}

void Heavy_epmk::cCast_4J9WKnTX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_X5qFEIvw, 0, m, &cDelay_X5qFEIvw_sendMessage);
}

void Heavy_epmk::cMsg_gWr3MAI9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_X5qFEIvw, 0, m, &cDelay_X5qFEIvw_sendMessage);
}

void Heavy_epmk::cMsg_I6x1V25C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LbU9nL2y, 0, m, &cSlice_LbU9nL2y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lXXyNwwZ, 0, m, &cSlice_lXXyNwwZ_sendMessage);
}

void Heavy_epmk::cCast_Nasn9Blz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_EAiTNVgo, 0, m, &cDelay_EAiTNVgo_sendMessage);
}

void Heavy_epmk::cMsg_Fm2YhO1b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_EAiTNVgo, 0, m, &cDelay_EAiTNVgo_sendMessage);
}

void Heavy_epmk::cSwitchcase_U4MAmSWt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_Fm2YhO1b_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_Fm2YhO1b_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_EAiTNVgo, 1, m, &cDelay_EAiTNVgo_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Nasn9Blz_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_EAiTNVgo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_EAiTNVgo, m);
  cPack_onMessage(_c, &Context(_c)->cPack_anxjdzZ0, 0, m, &cPack_anxjdzZ0_sendMessage);
}

void Heavy_epmk::cMsg_cm8ETUNC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_cEnzzTRl, 1, m);
}

void Heavy_epmk::cCast_rhV2jZl0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_sYaTUsVE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_mRSk44O6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WRhJjbFK, 0, m, &cSlice_WRhJjbFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_doCNcPW6, 0, m, &cSlice_doCNcPW6_sendMessage);
}

void Heavy_epmk::cBinop_nKHLeeFF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_TWFxFOJ2, 1, m, &cIf_TWFxFOJ2_sendMessage);
}

void Heavy_epmk::cIf_TWFxFOJ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_6E11uKsI_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_x6NRVvnw_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_5fK9m9hF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_nKHLeeFF_sendMessage);
}

void Heavy_epmk::cBinop_x6NRVvnw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_wHBS162L_sendMessage);
}

void Heavy_epmk::cBinop_V0LAde94_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_F2Fkra67, m);
}

void Heavy_epmk::cMsg_6E11uKsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_F2Fkra67, m);
}

void Heavy_epmk::cBinop_wHBS162L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_ltnTcSQM_sendMessage);
}

void Heavy_epmk::cMsg_ex8HZdX0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_V0LAde94, HV_BINOP_POW, 0, m, &cBinop_V0LAde94_sendMessage);
}

void Heavy_epmk::cCast_APIvl2QI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_TWFxFOJ2, 0, m, &cIf_TWFxFOJ2_sendMessage);
}

void Heavy_epmk::cBinop_ltnTcSQM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_V0LAde94, HV_BINOP_POW, 1, m, &cBinop_V0LAde94_sendMessage);
  cMsg_ex8HZdX0_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_nbs3l2ZM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zMXNuqTp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FyGP7w3X_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GwIaYzdO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_16iJHYjV_sendMessage);
}

void Heavy_epmk::cMsg_QajnA6Rp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 50.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_WRhJjbFK, 0, m, &cSlice_WRhJjbFK_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_doCNcPW6, 0, m, &cSlice_doCNcPW6_sendMessage);
}

void Heavy_epmk::cBinop_JvM4z8SI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5SBP51i2, 0, m, &cVar_5SBP51i2_sendMessage);
}

void Heavy_epmk::cSlice_5RY6wqfc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_46yfNsDK, 0, m, &cDelay_46yfNsDK_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_rsQ08RHJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_v1MgTGmL_sendMessage);
      cSwitchcase_YthooAC6_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_GWKqx7Ur_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_anxjdzZ0, 0, m, &cPack_anxjdzZ0_sendMessage);
}

void Heavy_epmk::cMsg_95cWyDDs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2048.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_v6YfBjgr, HV_BINOP_MULTIPLY, 1, m, &cBinop_v6YfBjgr_sendMessage);
}

void Heavy_epmk::cMsg_Bo9hJHZy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.1f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_LbU9nL2y, 0, m, &cSlice_LbU9nL2y_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_lXXyNwwZ, 0, m, &cSlice_lXXyNwwZ_sendMessage);
}

void Heavy_epmk::cMsg_pNu16LYV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_5zCfjf5E_sendMessage);
}

void Heavy_epmk::cSystem_5zCfjf5E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fKudiXxA, m);
}

void Heavy_epmk::cReceive_jRvkrjxS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fYBjXPXT, 0, m, &cVar_fYBjXPXT_sendMessage);
}

void Heavy_epmk::cReceive_Lqz42fx7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mdzOwEp9, 1, m, &cIf_mdzOwEp9_sendMessage);
}

void Heavy_epmk::cReceive_dALt2xPH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qntfGuo1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_efqlgcgi_sendMessage);
}

void Heavy_epmk::cBinop_nPimqdR2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Udryqu6f, 1, m, &cPack_Udryqu6f_sendMessage);
}

void Heavy_epmk::cSlice_udHK9mGt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_7fFr229Y_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_3zwqB2iU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_avZpiXPU, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cDelay_Y1m3Wvo2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Y1m3Wvo2, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_GPGoipJl_sendMessage);
}

void Heavy_epmk::cBinop_UlqA1NZK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -30.0f, 0, m, &cBinop_OjaQpcFy_sendMessage);
}

void Heavy_epmk::cBinop_E2jmoZr2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yu4YUQ3s_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_C2NOP0nA_sendMessage);
}

void Heavy_epmk::cVar_jBuj356V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4QxiBDPL, HV_BINOP_MULTIPLY, 0, m, &cBinop_4QxiBDPL_sendMessage);
}

void Heavy_epmk::cMsg_x6RFVkSr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_fXScSlAj_sendMessage);
}

void Heavy_epmk::cBinop_fXScSlAj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4QxiBDPL, HV_BINOP_MULTIPLY, 1, m, &cBinop_4QxiBDPL_sendMessage);
}

void Heavy_epmk::cMsg_vRWzmAOd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_pDfXwyMZ_sendMessage);
}

void Heavy_epmk::cSystem_pDfXwyMZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_x6RFVkSr_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_4QxiBDPL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_9iVkd02k_sendMessage);
}

void Heavy_epmk::cBinop_Sk3hmYmR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_SOE0cbv1_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_h34a9dd9, m);
}

void Heavy_epmk::cBinop_9iVkd02k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Sk3hmYmR_sendMessage);
}

void Heavy_epmk::cBinop_SOE0cbv1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_O2sEpa3M, m);
}

void Heavy_epmk::cBinop_OjaQpcFy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_E2jmoZr2_sendMessage);
}

void Heavy_epmk::cCast_Z9nGPA5K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hWz1RXIv_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_GPGoipJl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 126.0f, 0, m, &cBinop_o6JTSDCW_sendMessage);
}

void Heavy_epmk::cDelay_7ejTS4xf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_7ejTS4xf, m);
  cPack_onMessage(_c, &Context(_c)->cPack_M7NMcNCz, 0, m, &cPack_M7NMcNCz_sendMessage);
}

void Heavy_epmk::cMsg_Q9JJMJFv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_7ejTS4xf, 0, m, &cDelay_7ejTS4xf_sendMessage);
}

void Heavy_epmk::cSwitchcase_3n2N30Lp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_Q9JJMJFv_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_Q9JJMJFv_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_7ejTS4xf, 1, m, &cDelay_7ejTS4xf_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uy72mjM5_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_uy72mjM5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_7ejTS4xf, 0, m, &cDelay_7ejTS4xf_sendMessage);
}

void Heavy_epmk::cCast_zvCpe71U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z5eG1dzs_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_IsbWCTUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_KDKG60tW_sendMessage);
}

void Heavy_epmk::cBinop_KDKG60tW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_V3vkOe7C_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_N6f5Azrw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xnVB8nla_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_r6MaoSfR, 0, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_1NxvoTUo, m);
}

void Heavy_epmk::cBinop_lRNCsyVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IsbWCTUJ, HV_BINOP_POW, 1, m, &cBinop_IsbWCTUJ_sendMessage);
  cMsg_tzpyNfmF_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_Sq2T9D6z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_lRNCsyVu_sendMessage);
}

void Heavy_epmk::cMsg_tzpyNfmF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_IsbWCTUJ, HV_BINOP_POW, 0, m, &cBinop_IsbWCTUJ_sendMessage);
}

void Heavy_epmk::cBinop_o6JTSDCW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JefdwLsG_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_zaa9TbDl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_G4o6afpH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSystem_olCFx8ZR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JdZyqtot, m);
}

void Heavy_epmk::cMsg_4QMGNrEf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_olCFx8ZR_sendMessage);
}

void Heavy_epmk::cCast_hjkxERx8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_B0G52ltq, 0, m, &cDelay_B0G52ltq_sendMessage);
}

void Heavy_epmk::cMsg_9LEFjYY4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_B0G52ltq, 0, m, &cDelay_B0G52ltq_sendMessage);
}

void Heavy_epmk::cSwitchcase_s89ePRKl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_9LEFjYY4_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_9LEFjYY4_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_B0G52ltq, 1, m, &cDelay_B0G52ltq_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hjkxERx8_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_B0G52ltq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_B0G52ltq, m);
  cMsg_XQ3JtKkR_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_aX93mjH6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_uVpc7R6U, 0, m, NULL);
}

void Heavy_epmk::cCast_MixSSwON_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cEIATJsT_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_C2dznUxK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jheLMLUP, HV_BINOP_MULTIPLY, 1, m, &cBinop_jheLMLUP_sendMessage);
}

void Heavy_epmk::cCast_4BAPVftw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSwitchcase_g4kXJZla_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4BAPVftw_sendMessage);
      break;
    }
    default: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_Y1m3Wvo2, 0, m, &cDelay_Y1m3Wvo2_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_IUV8V1kI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udHK9mGt, 0, m, &cSlice_udHK9mGt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zwqB2iU, 0, m, &cSlice_3zwqB2iU_sendMessage);
}

void Heavy_epmk::cSlice_YcsVXsYj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_ybEGcy1e_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_HAMvI6cM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_tbSNPr5E, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_N6f5Azrw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z5eG1dzs_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_DtbwQsDE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_FxxedvNI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_sltCVJvg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YcsVXsYj, 0, m, &cSlice_YcsVXsYj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HAMvI6cM, 0, m, &cSlice_HAMvI6cM_sendMessage);
}

void Heavy_epmk::cMsg_XQ3JtKkR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_r6MaoSfR, 1, m);
}

void Heavy_epmk::cMsg_cEIATJsT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 1.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_uVpc7R6U, 0, m, NULL);
}

void Heavy_epmk::cBinop_JrqEsvav_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jheLMLUP, HV_BINOP_MULTIPLY, 0, m, &cBinop_jheLMLUP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 128.0f, 0, m, &cBinop_nPimqdR2_sendMessage);
}

void Heavy_epmk::cSlice_BDGdRGr0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_Sq2T9D6z_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_Sq2T9D6z_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_FxxedvNI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_BDGdRGr0, 0, m, &cSlice_BDGdRGr0_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_E50Mklh8, 0, m, &cSlice_E50Mklh8_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_E50Mklh8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_yXp56jUj_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_yXp56jUj_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_8PHaMXGO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 50.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udHK9mGt, 0, m, &cSlice_udHK9mGt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zwqB2iU, 0, m, &cSlice_3zwqB2iU_sendMessage);
}

void Heavy_epmk::cMsg_7fFr229Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_WEeFspDf_sendMessage);
}

void Heavy_epmk::cDelay_1sv3YDZi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_1sv3YDZi, m);
  cPack_onMessage(_c, &Context(_c)->cPack_ODeAQJp5, 0, m, &cPack_ODeAQJp5_sendMessage);
}

void Heavy_epmk::cCast_cwKLPLOx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_3n2N30Lp_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_jheLMLUP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_M7NMcNCz, 1, m, &cPack_M7NMcNCz_sendMessage);
}

void Heavy_epmk::cMsg_WgZAEhVD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ayf4iWpp, 0, m, &cDelay_Ayf4iWpp_sendMessage);
}

void Heavy_epmk::cCast_HV757V5c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Ayf4iWpp, 0, m, &cDelay_Ayf4iWpp_sendMessage);
}

void Heavy_epmk::cDelay_Ayf4iWpp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Ayf4iWpp, m);
  cMsg_aGswla7L_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_G4o6afpH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_WgZAEhVD_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_WgZAEhVD_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_Ayf4iWpp, 1, m, &cDelay_Ayf4iWpp_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HV757V5c_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_V3vkOe7C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9UN0degg_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_1E06lcZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_x3iQ9qJN, 0, m, &cVar_x3iQ9qJN_sendMessage);
}

void Heavy_epmk::cMsg_z5eG1dzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_JrqEsvav_sendMessage);
}

void Heavy_epmk::cCast_Ch8fPq5m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_M7NMcNCz, 0, m, &cPack_M7NMcNCz_sendMessage);
}

void Heavy_epmk::cIf_6Mm2MKXc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_IbFSmHfb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_AqMxLoaJ_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_C2NOP0nA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6Mm2MKXc, 0, m, &cIf_6Mm2MKXc_sendMessage);
}

void Heavy_epmk::cBinop_qVWsdySL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6Mm2MKXc, 1, m, &cIf_6Mm2MKXc_sendMessage);
}

void Heavy_epmk::cMsg_IbFSmHfb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Yb11eBXB, m);
}

void Heavy_epmk::cCast_yu4YUQ3s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_qVWsdySL_sendMessage);
}

void Heavy_epmk::cBinop_AqMxLoaJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_dUt2wayM_sendMessage);
}

void Heavy_epmk::cBinop_d0bR2OkN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Yb11eBXB, m);
}

void Heavy_epmk::cBinop_dUt2wayM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_GzK41DWD_sendMessage);
}

void Heavy_epmk::cBinop_GzK41DWD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_d0bR2OkN, HV_BINOP_POW, 1, m, &cBinop_d0bR2OkN_sendMessage);
  cMsg_fDA2OaMA_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_fDA2OaMA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_d0bR2OkN, HV_BINOP_POW, 0, m, &cBinop_d0bR2OkN_sendMessage);
}

void Heavy_epmk::cSystem_qxjjCUdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_PN3xxJ2Y, m);
}

void Heavy_epmk::cMsg_Pp9pqbns_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qxjjCUdT_sendMessage);
}

void Heavy_epmk::cMsg_VFMweVEn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_9vruFHkq, 0, m, NULL);
}

void Heavy_epmk::cPack_ODeAQJp5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DtbwQsDE_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_ov5XPMv1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_C2dznUxK_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_ThoJS8S1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_x0baeL3b_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MixSSwON_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MDnNCv8o_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zaa9TbDl_sendMessage);
  cSwitchcase_s89ePRKl_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_VoB9CGsm_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ThoJS8S1_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cMsg_hWz1RXIv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 1.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_udHK9mGt, 0, m, &cSlice_udHK9mGt_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_3zwqB2iU, 0, m, &cSlice_3zwqB2iU_sendMessage);
}

void Heavy_epmk::cCast_xnVB8nla_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SliJCHRv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cwKLPLOx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Z9nGPA5K_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DScMO9W9_sendMessage);
}

void Heavy_epmk::cBinop_yJ1Jk2DC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_VoB9CGsm_onMessage(_c, NULL, 0, m, NULL);
  cPack_onMessage(_c, &Context(_c)->cPack_ODeAQJp5, 1, m, &cPack_ODeAQJp5_sendMessage);
}

void Heavy_epmk::cMsg_aGswla7L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20000.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_9vruFHkq, 0, m, NULL);
}

void Heavy_epmk::cCast_DScMO9W9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_8gKAoxTE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cPack_M7NMcNCz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sltCVJvg_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_8gKAoxTE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_B8pPTXTE_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_B8pPTXTE_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_VRAZwqUA, 1, m, &cDelay_VRAZwqUA_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TiKQnisn_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_VRAZwqUA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_VRAZwqUA, m);
  cPack_onMessage(_c, &Context(_c)->cPack_Udryqu6f, 0, m, &cPack_Udryqu6f_sendMessage);
}

void Heavy_epmk::cCast_TiKQnisn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_VRAZwqUA, 0, m, &cDelay_VRAZwqUA_sendMessage);
}

void Heavy_epmk::cMsg_B8pPTXTE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_VRAZwqUA, 0, m, &cDelay_VRAZwqUA_sendMessage);
}

void Heavy_epmk::cBinop_HoRXnw2z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_l2EbGRHa, m);
}

void Heavy_epmk::cMsg_JTe568GJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xYbe9iCu_sendMessage);
}

void Heavy_epmk::cSystem_xYbe9iCu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EhNmQmSt_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_EhNmQmSt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_o26ADZoX_sendMessage);
}

void Heavy_epmk::cBinop_o26ADZoX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6POzTdS4, HV_BINOP_MULTIPLY, 1, m, &cBinop_6POzTdS4_sendMessage);
}

void Heavy_epmk::cBinop_6POzTdS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_lNny7D9U_sendMessage);
}

void Heavy_epmk::cBinop_9appAtSQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_HoRXnw2z_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_nu8YY4hF, m);
}

void Heavy_epmk::cBinop_lNny7D9U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_9appAtSQ_sendMessage);
}

void Heavy_epmk::cVar_x3iQ9qJN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6POzTdS4, HV_BINOP_MULTIPLY, 0, m, &cBinop_6POzTdS4_sendMessage);
}

void Heavy_epmk::cDelay_tzKeJWEB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_tzKeJWEB, m);
  cMsg_VFMweVEn_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_s4vqea7x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_tzKeJWEB, 0, m, &cDelay_tzKeJWEB_sendMessage);
}

void Heavy_epmk::cMsg_yQi7cON8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_tzKeJWEB, 0, m, &cDelay_tzKeJWEB_sendMessage);
}

void Heavy_epmk::cSwitchcase_vtdMFUbG_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_yQi7cON8_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_yQi7cON8_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_tzKeJWEB, 1, m, &cDelay_tzKeJWEB_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_s4vqea7x_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_VFgbRo1S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_VFgbRo1S, m);
  cMsg_aX93mjH6_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSwitchcase_DmNG5FG1_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_oc98Ddmh_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_oc98Ddmh_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_VFgbRo1S, 1, m, &cDelay_VFgbRo1S_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_P8LbWGzx_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_oc98Ddmh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_VFgbRo1S, 0, m, &cDelay_VFgbRo1S_sendMessage);
}

void Heavy_epmk::cCast_P8LbWGzx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_VFgbRo1S, 0, m, &cDelay_VFgbRo1S_sendMessage);
}

void Heavy_epmk::cPack_Udryqu6f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IUV8V1kI_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_SliJCHRv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_F0kvP6zD_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_9UN0degg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2048.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_jheLMLUP, HV_BINOP_MULTIPLY, 1, m, &cBinop_jheLMLUP_sendMessage);
}

void Heavy_epmk::cMsg_ybEGcy1e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1E06lcZf_sendMessage);
}

void Heavy_epmk::cCast_MDnNCv8o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_vtdMFUbG_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_JefdwLsG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_UlqA1NZK_sendMessage);
}

void Heavy_epmk::cBinop_WEeFspDf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jBuj356V, 0, m, &cVar_jBuj356V_sendMessage);
}

void Heavy_epmk::cBinop_DqC9788v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_n71cK7aw_sendMessage);
}

void Heavy_epmk::cBinop_n71cK7aw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ov5XPMv1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zvCpe71U_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ch8fPq5m_sendMessage);
}

void Heavy_epmk::cMsg_AwDITMIL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_DqC9788v, HV_BINOP_POW, 0, m, &cBinop_DqC9788v_sendMessage);
}

void Heavy_epmk::cBinop_Z4I3NCuD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DqC9788v, HV_BINOP_POW, 1, m, &cBinop_DqC9788v_sendMessage);
  cMsg_AwDITMIL_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_yXp56jUj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_Z4I3NCuD_sendMessage);
}

void Heavy_epmk::cSlice_3lHGpSYF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_yJ1Jk2DC_sendMessage);
      cSwitchcase_g4kXJZla_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_Qn4LNaIZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_1sv3YDZi, 0, m, &cDelay_1sv3YDZi_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_x0baeL3b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_DmNG5FG1_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_F0kvP6zD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.1f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_YcsVXsYj, 0, m, &cSlice_YcsVXsYj_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_HAMvI6cM, 0, m, &cSlice_HAMvI6cM_sendMessage);
}

void Heavy_epmk::cSlice_tF7pERjk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_bjl69yx2, 0, m, &cSlice_bjl69yx2_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_aUOVvtS8, 0, m, &cSlice_aUOVvtS8_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_bjl69yx2, 0, m, &cSlice_bjl69yx2_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_aUOVvtS8, 0, m, &cSlice_aUOVvtS8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_cHAWTT23_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x40800000: { // "4.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tF7pERjk, 0, m, &cSlice_tF7pERjk_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cReceive_C8Hsp3hj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_rzhsWkON_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_PRKSyCEj_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_KHkC2jai_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_cHAWTT23_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_TWjwgyOo_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_mk1Ni2sr_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_VToucUvD_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_B5snS4cM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSlice_VEa2egjY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_KKaSS4yV_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_KKaSS4yV_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_LXxO9rht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_WfzhX4BK_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_WfzhX4BK_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_HWwZcI0y_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_VEa2egjY, 0, m, &cSlice_VEa2egjY_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_LXxO9rht, 0, m, &cSlice_LXxO9rht_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cCast_OR8qIFda_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6KNTbSDg_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_VGk57d6H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Q29UwsmG, 1, m, &cPack_Q29UwsmG_sendMessage);
}

void Heavy_epmk::cBinop_4YjC2zPk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VGk57d6H, HV_BINOP_MULTIPLY, 0, m, &cBinop_VGk57d6H_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 128.0f, 0, m, &cBinop_9GoYnUqN_sendMessage);
}

void Heavy_epmk::cMsg_v1VUO1bC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_2iTGWCHV, 1, m);
}

void Heavy_epmk::cMsg_y0k0n5vb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_4YjC2zPk_sendMessage);
}

void Heavy_epmk::cMsg_6KNTbSDg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2048.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VGk57d6H, HV_BINOP_MULTIPLY, 1, m, &cBinop_VGk57d6H_sendMessage);
}

void Heavy_epmk::cBinop_hSRfAnzM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_maE9fG0r_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JwbeWy8s_sendMessage);
}

void Heavy_epmk::cMsg_IXIbJqxG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20000.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_NMd3bLgd, 0, m, NULL);
}

void Heavy_epmk::cBinop_mJLCbQKt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_srKajN6u, HV_BINOP_POW, 1, m, &cBinop_srKajN6u_sendMessage);
  cMsg_i0oyuiZq_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_i0oyuiZq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_srKajN6u, HV_BINOP_POW, 0, m, &cBinop_srKajN6u_sendMessage);
}

void Heavy_epmk::cBinop_srKajN6u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_QBJ2W0ym_sendMessage);
}

void Heavy_epmk::cBinop_WfzhX4BK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_mJLCbQKt_sendMessage);
}

void Heavy_epmk::cBinop_QBJ2W0ym_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Lljd3YWI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vx4RIVTF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_t9JQ14Oj_sendMessage);
}

void Heavy_epmk::cCast_94R5NFiC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iIT6DQBW_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_6e0x9c6R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VGk57d6H, HV_BINOP_MULTIPLY, 1, m, &cBinop_VGk57d6H_sendMessage);
}

void Heavy_epmk::cCast_EBLZDfZ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ESLB2vgw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_qtNYuvfd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jSC8DwDV, 0, m, &cSlice_jSC8DwDV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_a81RjVii, 0, m, &cSlice_a81RjVii_sendMessage);
}

void Heavy_epmk::cSlice_a81RjVii_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_rl3i1Hto, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_jSC8DwDV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_mz9Pn3A3_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_MXziIDtA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ky7jQ4oh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M6ZLDg4m_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EHCTTnwY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EBLZDfZ0_sendMessage);
  cSwitchcase_9tindalO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_rgDtOPZH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MXziIDtA_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cCast_vx4RIVTF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_y0k0n5vb_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_t9JQ14Oj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Q29UwsmG, 0, m, &cPack_Q29UwsmG_sendMessage);
}

void Heavy_epmk::cBinop_awmBN2J6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KfllLE13, 0, m, &cVar_KfllLE13_sendMessage);
}

void Heavy_epmk::cBinop_txSPHI4s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PhF2RIQT, 0, m, &cVar_PhF2RIQT_sendMessage);
}

void Heavy_epmk::cBinop_hs9OYed1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_hSRfAnzM_sendMessage);
}

void Heavy_epmk::cCast_M6ZLDg4m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_roIyIKpI_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_WVY5iCay_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KB7TetEJ_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_yQKkX3U5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Wu1BAZy2, m);
}

void Heavy_epmk::cSystem_qPwE612L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_I5Dg2TWx_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_OfBlMUmS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_qPwE612L_sendMessage);
}

void Heavy_epmk::cBinop_nwPc63su_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_LTTvfeN7_sendMessage);
}

void Heavy_epmk::cMsg_I5Dg2TWx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0uFRQvUp_sendMessage);
}

void Heavy_epmk::cBinop_0uFRQvUp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nwPc63su, HV_BINOP_MULTIPLY, 1, m, &cBinop_nwPc63su_sendMessage);
}

void Heavy_epmk::cVar_KfllLE13_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nwPc63su, HV_BINOP_MULTIPLY, 0, m, &cBinop_nwPc63su_sendMessage);
}

void Heavy_epmk::cBinop_LTTvfeN7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_d3Kj1fPy_sendMessage);
}

void Heavy_epmk::cBinop_d3Kj1fPy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_yQKkX3U5_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_exU4GgIm, m);
}

void Heavy_epmk::cSlice_e24ndz30_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_Y5LYNmQj, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_9sHJUydF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_rE7ASREp_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_cUO1XjT0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qZzZIyTx_sendMessage(_c, 0, m);
}

void Heavy_epmk::cPack_UC2UniWl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qtNYuvfd_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_Ky7jQ4oh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_EHlhID4C_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_DdyxrYDE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -30.0f, 0, m, &cBinop_hs9OYed1_sendMessage);
}

void Heavy_epmk::cDelay_62MqKaqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_62MqKaqt, m);
  cPack_onMessage(_c, &Context(_c)->cPack_Q29UwsmG, 0, m, &cPack_Q29UwsmG_sendMessage);
}

void Heavy_epmk::cCast_tTYS4a1D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_62MqKaqt, 0, m, &cDelay_62MqKaqt_sendMessage);
}

void Heavy_epmk::cSwitchcase_ShLW7zXy_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_CzJKAZ39_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_CzJKAZ39_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_62MqKaqt, 1, m, &cDelay_62MqKaqt_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tTYS4a1D_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_CzJKAZ39_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_62MqKaqt, 0, m, &cDelay_62MqKaqt_sendMessage);
}

void Heavy_epmk::cMsg_320Z3k4e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_q5o18k9o, 0, m, &cDelay_q5o18k9o_sendMessage);
}

void Heavy_epmk::cCast_kDU9FPRw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_q5o18k9o, 0, m, &cDelay_q5o18k9o_sendMessage);
}

void Heavy_epmk::cSwitchcase_SOola9Va_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_320Z3k4e_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_320Z3k4e_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_q5o18k9o, 1, m, &cDelay_q5o18k9o_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kDU9FPRw_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_q5o18k9o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_q5o18k9o, m);
  cMsg_20p2utql_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_jkOTNaOx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_rgDtOPZH_onMessage(_c, NULL, 0, m, NULL);
  cPack_onMessage(_c, &Context(_c)->cPack_C3fhnqYw, 1, m, &cPack_C3fhnqYw_sendMessage);
}

void Heavy_epmk::cMsg_20p2utql_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_NMd3bLgd, 0, m, NULL);
}

void Heavy_epmk::cDelay_ZtULHriU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ZtULHriU, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_L96VprbJ_sendMessage);
}

void Heavy_epmk::cPack_C3fhnqYw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Cn9yHlJ2_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_KB7TetEJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_DdyxrYDE_sendMessage);
}

void Heavy_epmk::cDelay_FlY83ZdV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_FlY83ZdV, m);
  cPack_onMessage(_c, &Context(_c)->cPack_UC2UniWl, 0, m, &cPack_UC2UniWl_sendMessage);
}

void Heavy_epmk::cSwitchcase_dSYWK4l9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_NbfLqcrg_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_NbfLqcrg_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_FlY83ZdV, 1, m, &cDelay_FlY83ZdV_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VFavoqR6_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_VFavoqR6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_FlY83ZdV, 0, m, &cDelay_FlY83ZdV_sendMessage);
}

void Heavy_epmk::cMsg_NbfLqcrg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_FlY83ZdV, 0, m, &cDelay_FlY83ZdV_sendMessage);
}

void Heavy_epmk::cMsg_Cn9yHlJ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_HWwZcI0y_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_I37R6UdX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_94c2rnXF, 0, m, NULL);
}

void Heavy_epmk::cCast_Cr3irOek_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_94R5NFiC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UUn2eDqo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cUO1XjT0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ydl8b66l_sendMessage);
}

void Heavy_epmk::cMsg_roIyIKpI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 1.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_94c2rnXF, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_ESLB2vgw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_m6H1GFWq_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_m6H1GFWq_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_G9Kp59wv, 1, m, &cDelay_G9Kp59wv_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZPaPfDKt_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_ZPaPfDKt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_G9Kp59wv, 0, m, &cDelay_G9Kp59wv_sendMessage);
}

void Heavy_epmk::cMsg_m6H1GFWq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_G9Kp59wv, 0, m, &cDelay_G9Kp59wv_sendMessage);
}

void Heavy_epmk::cDelay_G9Kp59wv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_G9Kp59wv, m);
  cMsg_IXIbJqxG_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_wkXh7GMI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_RMKZfiko_sendMessage);
}

void Heavy_epmk::cSystem_yU64Gvel_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Pnai2USm_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_KNhQewg2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_yU64Gvel_sendMessage);
}

void Heavy_epmk::cMsg_Pnai2USm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_3qER677N_sendMessage);
}

void Heavy_epmk::cBinop_3qER677N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wkXh7GMI, HV_BINOP_MULTIPLY, 1, m, &cBinop_wkXh7GMI_sendMessage);
}

void Heavy_epmk::cBinop_65Vh0Wpg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GYdx25hS, m);
}

void Heavy_epmk::cBinop_GapKK3by_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_65Vh0Wpg_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_aUg6U3ZY, m);
}

void Heavy_epmk::cBinop_RMKZfiko_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_GapKK3by_sendMessage);
}

void Heavy_epmk::cVar_PhF2RIQT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wkXh7GMI, HV_BINOP_MULTIPLY, 0, m, &cBinop_wkXh7GMI_sendMessage);
}

void Heavy_epmk::cMsg_iIT6DQBW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.1f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9sHJUydF, 0, m, &cSlice_9sHJUydF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e24ndz30, 0, m, &cSlice_e24ndz30_sendMessage);
}

void Heavy_epmk::cCast_Ydl8b66l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_dSYWK4l9_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_L96VprbJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 126.0f, 0, m, &cBinop_WVY5iCay_sendMessage);
}

void Heavy_epmk::cMsg_8BXr6UlC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_9sHJUydF, 0, m, &cSlice_9sHJUydF_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_e24ndz30, 0, m, &cSlice_e24ndz30_sendMessage);
}

void Heavy_epmk::cMsg_rE7ASREp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_awmBN2J6_sendMessage);
}

void Heavy_epmk::cMsg_qZzZIyTx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 1.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jSC8DwDV, 0, m, &cSlice_jSC8DwDV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_a81RjVii, 0, m, &cSlice_a81RjVii_sendMessage);
}

void Heavy_epmk::cCast_tBe3vfYd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_lBaP7nq5, 0, m, &cDelay_lBaP7nq5_sendMessage);
}

void Heavy_epmk::cSwitchcase_9tindalO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_r3MhN0me_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_r3MhN0me_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_lBaP7nq5, 1, m, &cDelay_lBaP7nq5_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tBe3vfYd_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_r3MhN0me_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_lBaP7nq5, 0, m, &cDelay_lBaP7nq5_sendMessage);
}

void Heavy_epmk::cDelay_lBaP7nq5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_lBaP7nq5, m);
  cMsg_v1VUO1bC_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSystem_UqGKddWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fXDrMF29, m);
}

void Heavy_epmk::cMsg_kbsflaqA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UqGKddWH_sendMessage);
}

void Heavy_epmk::cCast_UUn2eDqo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ShLW7zXy_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_EHCTTnwY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_SOola9Va_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_EHlhID4C_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_xhSJH38r_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_xhSJH38r_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_M1bk2Bpp, 1, m, &cDelay_M1bk2Bpp_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_U4ehVLRI_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_xhSJH38r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_M1bk2Bpp, 0, m, &cDelay_M1bk2Bpp_sendMessage);
}

void Heavy_epmk::cDelay_M1bk2Bpp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_M1bk2Bpp, m);
  cMsg_I37R6UdX_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_U4ehVLRI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_M1bk2Bpp, 0, m, &cDelay_M1bk2Bpp_sendMessage);
}

void Heavy_epmk::cBinop_l7CPOnFk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OR8qIFda_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fC3h5CeJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Cr3irOek_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_2iTGWCHV, 0, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_dXM8P1k0, m);
}

void Heavy_epmk::cBinop_I9J3JLFM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_l7CPOnFk_sendMessage);
}

void Heavy_epmk::cMsg_5CPWygkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_I9J3JLFM, HV_BINOP_POW, 0, m, &cBinop_I9J3JLFM_sendMessage);
}

void Heavy_epmk::cBinop_KKaSS4yV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_cXRGxGNM_sendMessage);
}

void Heavy_epmk::cBinop_cXRGxGNM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I9J3JLFM, HV_BINOP_POW, 1, m, &cBinop_I9J3JLFM_sendMessage);
  cMsg_5CPWygkd_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_6kpPGRlv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 50.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_jSC8DwDV, 0, m, &cSlice_jSC8DwDV_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_a81RjVii, 0, m, &cSlice_a81RjVii_sendMessage);
}

void Heavy_epmk::cCast_Lljd3YWI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6e0x9c6R_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_fC3h5CeJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_y0k0n5vb_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_xQYJRvtC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WyiwiafM, HV_BINOP_POW, 0, m, &cBinop_WyiwiafM_sendMessage);
}

void Heavy_epmk::cMsg_jcNdYvxt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_H6hQAdxV, m);
}

void Heavy_epmk::cBinop_WyiwiafM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_H6hQAdxV, m);
}

void Heavy_epmk::cCast_maE9fG0r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_FQ8U0Cky_sendMessage);
}

void Heavy_epmk::cCast_JwbeWy8s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wiOrVcTn, 0, m, &cIf_wiOrVcTn_sendMessage);
}

void Heavy_epmk::cBinop_H6ERjYZX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_ixKfEB7F_sendMessage);
}

void Heavy_epmk::cBinop_Zb1oQPR2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WyiwiafM, HV_BINOP_POW, 1, m, &cBinop_WyiwiafM_sendMessage);
  cMsg_xQYJRvtC_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_FQ8U0Cky_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wiOrVcTn, 1, m, &cIf_wiOrVcTn_sendMessage);
}

void Heavy_epmk::cBinop_ixKfEB7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_Zb1oQPR2_sendMessage);
}

void Heavy_epmk::cIf_wiOrVcTn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_jcNdYvxt_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_H6ERjYZX_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_qmigbCnO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSwitchcase_zV5FEIjN_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qmigbCnO_sendMessage);
      break;
    }
    default: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_ZtULHriU, 0, m, &cDelay_ZtULHriU_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cSlice_bjl69yx2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_jkOTNaOx_sendMessage);
      cSwitchcase_zV5FEIjN_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_aUOVvtS8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_ojzSRNC4, 0, m, &cDelay_ojzSRNC4_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_9GoYnUqN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_UC2UniWl, 1, m, &cPack_UC2UniWl_sendMessage);
}

void Heavy_epmk::cDelay_ojzSRNC4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ojzSRNC4, m);
  cPack_onMessage(_c, &Context(_c)->cPack_C3fhnqYw, 0, m, &cPack_C3fhnqYw_sendMessage);
}

void Heavy_epmk::cMsg_mz9Pn3A3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_txSPHI4s_sendMessage);
}

void Heavy_epmk::cPack_Q29UwsmG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8BXr6UlC_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSystem_eGLu5PHR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BpfeER8P, m);
}

void Heavy_epmk::cMsg_IUgUH8r8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_eGLu5PHR_sendMessage);
}

void Heavy_epmk::cReceive_0jHySNQ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VM13ldWN, 1, m, &cVar_VM13ldWN_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_E4ZQss4p, 1, m, &cTabwrite_E4ZQss4p_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_RQaPyvvw, 1, m, &cTabwrite_RQaPyvvw_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_0juDVZzh, 1, m, &cTabwrite_0juDVZzh_sendMessage);
}

void Heavy_epmk::cBinop_HLWRera2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_2oJ6IfOU_sendMessage);
}

void Heavy_epmk::cBinop_s35n1lN1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_1g0aw1V9, m);
}

void Heavy_epmk::cMsg_wdGnbeWM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_dXvdPKld_sendMessage);
}

void Heavy_epmk::cSystem_dXvdPKld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7dwygXJd, HV_BINOP_DIVIDE, 1, m, &cBinop_7dwygXJd_sendMessage);
}

void Heavy_epmk::cVar_2ALbBIKV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_HLWRera2_sendMessage);
}

void Heavy_epmk::cMsg_AWsUgEpq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_fqbB9QDy_sendMessage);
}

void Heavy_epmk::cBinop_kWisuTqX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Vbk01Da7_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Y663En8x_sendMessage);
}

void Heavy_epmk::cBinop_kBgpFRKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_kWisuTqX_sendMessage);
}

void Heavy_epmk::cBinop_Vbk01Da7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_s35n1lN1_sendMessage);
}

void Heavy_epmk::cBinop_Y663En8x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oVTSebHs, m);
}

void Heavy_epmk::cBinop_fqbB9QDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_kBgpFRKv_sendMessage);
}

void Heavy_epmk::cBinop_7dwygXJd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AWsUgEpq_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_2oJ6IfOU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7dwygXJd, HV_BINOP_DIVIDE, 0, m, &cBinop_7dwygXJd_sendMessage);
}

void Heavy_epmk::cReceive_COXvsMtn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7zq5ceyZ, 1, m, &cVar_7zq5ceyZ_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ujKZaCpx, 1, m, &cVar_ujKZaCpx_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_t2Rl5Ell, HV_BINOP_MOD_UNIPOLAR, 1, m, &cBinop_t2Rl5Ell_sendMessage);
}

void Heavy_epmk::cSwitchcase_B5snS4cM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x41000000: { // "8.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_WamoEHhN, 0, m, &cSlice_WamoEHhN_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_WamoEHhN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_B1pAf17F, 0, m, &cSlice_B1pAf17F_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_BmvIEvyx, 0, m, &cSlice_BmvIEvyx_sendMessage);
      break;
    }
    case 1: {
      cSlice_onMessage(_c, &Context(_c)->cSlice_B1pAf17F, 0, m, &cSlice_B1pAf17F_sendMessage);
      cSlice_onMessage(_c, &Context(_c)->cSlice_BmvIEvyx, 0, m, &cSlice_BmvIEvyx_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_FGDpJOVq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_ZsFeJi7s, 0, m, &cDelay_ZsFeJi7s_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_MmXiOaKc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_1v7rFNXT_sendMessage);
      cSwitchcase_UmcDRmi0_onMessage(_c, NULL, 0, m, NULL);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cCast_SL8ICz8W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ruNusap5_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_hES4tSvR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uqkfF7lp_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_yDrHeOYD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RFZj49RJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_RFZj49RJ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 128.0f, 0, m, &cBinop_otPmiKMV_sendMessage);
}

void Heavy_epmk::cCast_k7QNucng_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6Mzv0aP4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M5TcQgnU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZLBELI2b_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Xdzxf2F0_sendMessage);
  cSwitchcase_HF13VpEI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSwitchcase_EKMCmQLg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_k7QNucng_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cCast_Oj9j1ns2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SL8ICz8W_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jmwCIuVX_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DCg7hLak_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_p7AZE9DG_sendMessage);
}

void Heavy_epmk::cCast_GNTC5HrD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_epmk::cSwitchcase_UmcDRmi0_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GNTC5HrD_sendMessage);
      break;
    }
    default: {
      cDelay_onMessage(_c, &Context(_c)->cDelay_OASU1zry, 0, m, &cDelay_OASU1zry_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cPack_C7k0t1zS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pzPfk8DS_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_QX2qML9p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5HOXgoAs, 0, m, &cSlice_5HOXgoAs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j8yb2HaY, 0, m, &cSlice_j8yb2HaY_sendMessage);
}

void Heavy_epmk::cBinop_R7j8x6Mi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XXJqcla9_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_lPcTAqZm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_l6mP8N4g_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_XXJqcla9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_oH53gyRl_sendMessage);
}

void Heavy_epmk::cBinop_RnR0bsud_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_aKVVRGmA, 0, m, &cVar_aKVVRGmA_sendMessage);
}

void Heavy_epmk::cCast_jmwCIuVX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_u6fqDLXM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_nvtA8ceB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_CN84J7WP_sendMessage);
}

void Heavy_epmk::cBinop_mWuKpe0C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ijN5FsBu, m);
}

void Heavy_epmk::cBinop_PaykmPhg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_tNEXpv3x_sendMessage);
}

void Heavy_epmk::cMsg_K9MVJi6X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ijN5FsBu, m);
}

void Heavy_epmk::cCast_k9bM0Ahs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_4ZrAcY3u, 0, m, &cIf_4ZrAcY3u_sendMessage);
}

void Heavy_epmk::cBinop_tNEXpv3x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_rVkOaLC2_sendMessage);
}

void Heavy_epmk::cBinop_CN84J7WP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_4ZrAcY3u, 1, m, &cIf_4ZrAcY3u_sendMessage);
}

void Heavy_epmk::cMsg_j3jRw1TU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_mWuKpe0C, HV_BINOP_POW, 0, m, &cBinop_mWuKpe0C_sendMessage);
}

void Heavy_epmk::cBinop_rVkOaLC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mWuKpe0C, HV_BINOP_POW, 1, m, &cBinop_mWuKpe0C_sendMessage);
  cMsg_j3jRw1TU_sendMessage(_c, 0, m);
}

void Heavy_epmk::cIf_4ZrAcY3u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_K9MVJi6X_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_PaykmPhg_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cBinop_1v7rFNXT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_EKMCmQLg_onMessage(_c, NULL, 0, m, NULL);
  cPack_onMessage(_c, &Context(_c)->cPack_C7k0t1zS, 1, m, &cPack_C7k0t1zS_sendMessage);
}

void Heavy_epmk::cMsg_ImHXJ04t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_3P4petKB, 0, m, NULL);
}

void Heavy_epmk::cMsg_l6mP8N4g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2048.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RFZj49RJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_RFZj49RJ_sendMessage);
}

void Heavy_epmk::cCast_M5TcQgnU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pRrb16I4_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_5HOXgoAs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_hHnTghIv_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_j8yb2HaY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_01QTtBux, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_0rh3Hbru_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_byWPpwDS_sendMessage);
}

void Heavy_epmk::cCast_ZLBELI2b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Ti8fi1uh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cMsg_hHnTghIv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_RnR0bsud_sendMessage);
}

void Heavy_epmk::cPack_CqFbEI7B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_djny1KRQ_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_4mCJoRHC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_yDrHeOYD_sendMessage);
}

void Heavy_epmk::cSwitchcase_ltL6pOsY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_DqtzQpFn_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_DqtzQpFn_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_cdxHeEvU, 1, m, &cDelay_cdxHeEvU_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hdPqlMt3_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cDelay_cdxHeEvU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_cdxHeEvU, m);
  cMsg_ImHXJ04t_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_hdPqlMt3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_cdxHeEvU, 0, m, &cDelay_cdxHeEvU_sendMessage);
}

void Heavy_epmk::cMsg_DqtzQpFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_cdxHeEvU, 0, m, &cDelay_cdxHeEvU_sendMessage);
}

void Heavy_epmk::cBinop_9sqVj4lY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 100.0f, 0, m, &cBinop_Xtu1Genn_sendMessage);
}

void Heavy_epmk::cMsg_aaqeEka0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 20000.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_7HspNWeE, 0, m, NULL);
}

void Heavy_epmk::cCast_HcyBBG9X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4mCJoRHC_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_cK59zUN4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zf5qr8Ie, HV_BINOP_POW, 1, m, &cBinop_Zf5qr8Ie_sendMessage);
  cMsg_uBG99BLM_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_uBG99BLM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Zf5qr8Ie, HV_BINOP_POW, 0, m, &cBinop_Zf5qr8Ie_sendMessage);
}

void Heavy_epmk::cBinop_QDqg8gjU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_cK59zUN4_sendMessage);
}

void Heavy_epmk::cBinop_y1DRQjeX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hES4tSvR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HcyBBG9X_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aSEcbXC7_sendMessage);
}

void Heavy_epmk::cBinop_Zf5qr8Ie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_y1DRQjeX_sendMessage);
}

void Heavy_epmk::cMsg_djny1KRQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setElementToFrom(m, 1, n, 1);
  cSlice_onMessage(_c, &Context(_c)->cSlice_upXVMKVH, 0, m, &cSlice_upXVMKVH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_esC8FsOp, 0, m, &cSlice_esC8FsOp_sendMessage);
}

void Heavy_epmk::cPack_gBV8e3SP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QX2qML9p_sendMessage(_c, 0, m);
}

void Heavy_epmk::cDelay_ZsFeJi7s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ZsFeJi7s, m);
  cPack_onMessage(_c, &Context(_c)->cPack_C7k0t1zS, 0, m, &cPack_C7k0t1zS_sendMessage);
}

void Heavy_epmk::cSlice_ppWSunWa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_1I7AS0yR_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_1I7AS0yR_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSwitchcase_43GdtVC8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ppWSunWa, 0, m, &cSlice_ppWSunWa_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_mfo40rl9, 0, m, &cSlice_mfo40rl9_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_epmk::cSlice_mfo40rl9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_QDqg8gjU_sendMessage);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 69.0f, 0, m, &cBinop_QDqg8gjU_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cDelay_V9MnY90S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_V9MnY90S, m);
  cMsg_V8GZ3bte_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_208T0Qj3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_V9MnY90S, 0, m, &cDelay_V9MnY90S_sendMessage);
}

void Heavy_epmk::cMsg_oVAQ6eoo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_V9MnY90S, 0, m, &cDelay_V9MnY90S_sendMessage);
}

void Heavy_epmk::cSwitchcase_HF13VpEI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_oVAQ6eoo_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_oVAQ6eoo_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_V9MnY90S, 1, m, &cDelay_V9MnY90S_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_208T0Qj3_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cSystem_nPAY79yM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QM22area, m);
}

void Heavy_epmk::cMsg_RpJdPFes_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_nPAY79yM_sendMessage);
}

void Heavy_epmk::cVar_aKVVRGmA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_D01rdLfl, HV_BINOP_MULTIPLY, 0, m, &cBinop_D01rdLfl_sendMessage);
}

void Heavy_epmk::cBinop_UarcxqJ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kz3WlxsF, m);
}

void Heavy_epmk::cMsg_kOcxlZ6u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_eUER1gr9_sendMessage);
}

void Heavy_epmk::cMsg_2UFRW87F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Re6bPhdZ_sendMessage);
}

void Heavy_epmk::cSystem_Re6bPhdZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kOcxlZ6u_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_D01rdLfl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_k5KMJl4Y_sendMessage);
}

void Heavy_epmk::cBinop_eUER1gr9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_D01rdLfl, HV_BINOP_MULTIPLY, 1, m, &cBinop_D01rdLfl_sendMessage);
}

void Heavy_epmk::cBinop_ItkaXGNz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_UarcxqJ6_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_pEp7LBuH, m);
}

void Heavy_epmk::cBinop_k5KMJl4Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_ItkaXGNz_sendMessage);
}

void Heavy_epmk::cMsg_gQSqxmXL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 50.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_upXVMKVH, 0, m, &cSlice_upXVMKVH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_esC8FsOp, 0, m, &cSlice_esC8FsOp_sendMessage);
}

void Heavy_epmk::cMsg_U1oIkys7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 0.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_7HspNWeE, 0, m, NULL);
}

void Heavy_epmk::cCast_aSEcbXC7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_gBV8e3SP, 0, m, &cPack_gBV8e3SP_sendMessage);
}

void Heavy_epmk::cDelay_OASU1zry_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_OASU1zry, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_7OOvtCQZ_sendMessage);
}

void Heavy_epmk::cBinop_otPmiKMV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_CqFbEI7B, 1, m, &cPack_CqFbEI7B_sendMessage);
}

void Heavy_epmk::cCast_6Mzv0aP4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_ltL6pOsY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cCast_ExnbHeEI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4mCJoRHC_sendMessage(_c, 0, m);
}

void Heavy_epmk::cSlice_upXVMKVH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_0rh3Hbru_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cSlice_esC8FsOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      sVarf_onMessage(_c, &Context(_c)->sVarf_QiXEwzil, m);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_epmk::cMsg_pzPfk8DS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 0);
  cSwitchcase_43GdtVC8_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_RFZj49RJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_gBV8e3SP, 1, m, &cPack_gBV8e3SP_sendMessage);
}

void Heavy_epmk::cMsg_ruNusap5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 0.1f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_5HOXgoAs, 0, m, &cSlice_5HOXgoAs_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_j8yb2HaY, 0, m, &cSlice_j8yb2HaY_sendMessage);
}

void Heavy_epmk::cMsg_V8GZ3bte_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_Yh6BnmRO, 1, m);
}

void Heavy_epmk::cBinop_byWPpwDS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_s2q2QuIa, 0, m, &cVar_s2q2QuIa_sendMessage);
}

void Heavy_epmk::cDelay_VVMEA87x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_VVMEA87x, m);
  cMsg_U1oIkys7_sendMessage(_c, 0, m);
}

void Heavy_epmk::cCast_uyS6AgQT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_VVMEA87x, 0, m, &cDelay_VVMEA87x_sendMessage);
}

void Heavy_epmk::cMsg_tU0vg2rL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_VVMEA87x, 0, m, &cDelay_VVMEA87x_sendMessage);
}

void Heavy_epmk::cSwitchcase_Ti8fi1uh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_tU0vg2rL_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_tU0vg2rL_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_VVMEA87x, 1, m, &cDelay_VVMEA87x_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uyS6AgQT_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_Os8o6Lff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ltlr56PU, 0, m, &cDelay_ltlr56PU_sendMessage);
}

void Heavy_epmk::cDelay_ltlr56PU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ltlr56PU, m);
  cPack_onMessage(_c, &Context(_c)->cPack_CqFbEI7B, 0, m, &cPack_CqFbEI7B_sendMessage);
}

void Heavy_epmk::cCast_NAyOptDn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ltlr56PU, 0, m, &cDelay_ltlr56PU_sendMessage);
}

void Heavy_epmk::cSwitchcase_BKamUMiP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_Os8o6Lff_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_Os8o6Lff_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_ltlr56PU, 1, m, &cDelay_ltlr56PU_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NAyOptDn_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cMsg_pRrb16I4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  msg_setFloat(m, 1, 1.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_3P4petKB, 0, m, NULL);
}

void Heavy_epmk::cCast_p7AZE9DG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_BKamUMiP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cBinop_PzDgc8Mw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lPcTAqZm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ExnbHeEI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Oj9j1ns2_sendMessage);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_Yh6BnmRO, 0, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_k2DwLNLN, m);
}

void Heavy_epmk::cBinop_1I7AS0yR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 12.0f, 0, m, &cBinop_R7U9IK2G_sendMessage);
}

void Heavy_epmk::cMsg_2nMfKBD3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RVXLDfB6, HV_BINOP_POW, 0, m, &cBinop_RVXLDfB6_sendMessage);
}

void Heavy_epmk::cBinop_RVXLDfB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 440.0f, 0, m, &cBinop_PzDgc8Mw_sendMessage);
}

void Heavy_epmk::cBinop_R7U9IK2G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RVXLDfB6, HV_BINOP_POW, 1, m, &cBinop_RVXLDfB6_sendMessage);
  cMsg_2nMfKBD3_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_oH53gyRl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -30.0f, 0, m, &cBinop_9sqVj4lY_sendMessage);
}

void Heavy_epmk::cBinop_fa2NR861_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_WoIzKJzK, m);
}

void Heavy_epmk::cBinop_f2J9cr4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_fa2NR861_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_WMQN8bce, m);
}

void Heavy_epmk::cBinop_n3apJ0c6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_f2J9cr4a_sendMessage);
}

void Heavy_epmk::cVar_s2q2QuIa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1zG0ZabY, HV_BINOP_MULTIPLY, 0, m, &cBinop_1zG0ZabY_sendMessage);
}

void Heavy_epmk::cBinop_55uRDtoY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1zG0ZabY, HV_BINOP_MULTIPLY, 1, m, &cBinop_1zG0ZabY_sendMessage);
}

void Heavy_epmk::cMsg_2thmlUS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CxGRZnKw_sendMessage);
}

void Heavy_epmk::cSystem_CxGRZnKw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_p6NeuRff_sendMessage(_c, 0, m);
}

void Heavy_epmk::cBinop_1zG0ZabY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_n3apJ0c6_sendMessage);
}

void Heavy_epmk::cMsg_p6NeuRff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_55uRDtoY_sendMessage);
}

void Heavy_epmk::cMsg_uqkfF7lp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_RFZj49RJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_RFZj49RJ_sendMessage);
}

void Heavy_epmk::cMsg_LQ2Ekczh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_LSMCY6dQ, 0, m, &cDelay_LSMCY6dQ_sendMessage);
}

void Heavy_epmk::cSwitchcase_u6fqDLXM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_LQ2Ekczh_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_LQ2Ekczh_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_LSMCY6dQ, 1, m, &cDelay_LSMCY6dQ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EvOQKS2f_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_EvOQKS2f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_LSMCY6dQ, 0, m, &cDelay_LSMCY6dQ_sendMessage);
}

void Heavy_epmk::cDelay_LSMCY6dQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_LSMCY6dQ, m);
  cPack_onMessage(_c, &Context(_c)->cPack_gBV8e3SP, 0, m, &cPack_gBV8e3SP_sendMessage);
}

void Heavy_epmk::cCast_DCg7hLak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KFSY6pUn_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_KFSY6pUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setFloat(m, 1, 1.0f);
  cSlice_onMessage(_c, &Context(_c)->cSlice_upXVMKVH, 0, m, &cSlice_upXVMKVH_sendMessage);
  cSlice_onMessage(_c, &Context(_c)->cSlice_esC8FsOp, 0, m, &cSlice_esC8FsOp_sendMessage);
}

void Heavy_epmk::cBinop_Xtu1Genn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nvtA8ceB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_k9bM0Ahs_sendMessage);
}

void Heavy_epmk::cDelay_FzexiGZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_FzexiGZf, m);
  cMsg_aaqeEka0_sendMessage(_c, 0, m);
}

void Heavy_epmk::cMsg_tYwada8f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_FzexiGZf, 0, m, &cDelay_FzexiGZf_sendMessage);
}

void Heavy_epmk::cSwitchcase_LukvAuLd_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_tYwada8f_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_tYwada8f_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_FzexiGZf, 1, m, &cDelay_FzexiGZf_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TKcey2g9_sendMessage);
      break;
    }
  }
}

void Heavy_epmk::cCast_TKcey2g9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_FzexiGZf, 0, m, &cDelay_FzexiGZf_sendMessage);
}

void Heavy_epmk::cBinop_7OOvtCQZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 126.0f, 0, m, &cBinop_R7j8x6Mi_sendMessage);
}

void Heavy_epmk::cCast_Xdzxf2F0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_LukvAuLd_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_epmk::cSystem_Ez4989Fw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_2t2HFd15, m);
}

void Heavy_epmk::cMsg_J4klaWjZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Ez4989Fw_sendMessage);
}




/*
 * Context Process Implementation
 */

int Heavy_epmk::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9, Bf10, Bf11, Bf12, Bf13;

  // input and output vars
  hv_bufferf_t O0, O1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_var_k_f(VOf(Bf0), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_varread_f(&sVarf_pR90ZDCP, VOf(Bf1));
    __hv_varread_f(&sVarf_xJGitJ0K, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_bguGqCmV, VOf(Bf1));
    __hv_rpole_f(&sRPole_y4jlB8r5, VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_phasor_k_f(&sPhasor_JDXqhQVq, VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf6), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf7), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf4), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf6), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf2), VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf6));
    __hv_sub_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_abs_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf6), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf4), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf8), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf6), VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf8), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_var_k_f(VOf(Bf6), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf2), VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf8));
    __hv_sub_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_abs_f(VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf8));
    __hv_mul_f(VIf(Bf6), VIf(Bf8), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf3), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf8), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_div_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_M8SHGKY9, VOf(Bf5));
    __hv_varread_f(&sVarf_764z0Jl6, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_IhkoKzWe, VOf(Bf5));
    __hv_rpole_f(&sRPole_ERmV1L7C, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf1), VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_Vecj9a2Y, VOf(Bf7));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_hGKcjT7r, VOf(Bf4));
    __hv_mul_f(VIf(Bf7), VIf(Bf4), VOf(Bf7));
    __hv_var_k_f(VOf(Bf1), 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f);
    __hv_mul_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f);
    __hv_line_f(&sLine_VmNJ3HwZ, VOf(Bf3));
    __hv_add_f(VIf(Bf5), VIf(Bf3), VOf(Bf5));
    __hv_var_k_f(VOf(Bf8), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf9), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_div_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_jSYRcpmm, VOf(Bf2));
    __hv_div_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf8));
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf8), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf11), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf12), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf8), VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_div_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_floor_f(VIf(Bf2), VOf(Bf11));
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf2), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf11));
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf11), VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf6), VIf(Bf10), VOf(Bf6));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf10), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf12), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf10), VOf(Bf6));
    __hv_mul_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_stpO4Zxn, VIf(Bf1), VIf(Bf5), VIf(Bf6), VIf(Bf11), VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf9), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_var_k_f(VOf(Bf5), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_fma_f(VIf(Bf9), VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_div_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf2), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf5), VIf(Bf2), VOf(Bf5));
    __hv_pow_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf11), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_div_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f);
    __hv_pow_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_ncKKB3NR, VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf5), VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_XaDCaID4, VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf6), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_min_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_div_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_euAj5M4f, VOf(Bf2));
    __hv_div_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf6));
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf0), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf1), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf12), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf0), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf6), VIf(Bf1), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf3), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf12), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf12), VOf(Bf12));
    __hv_div_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_floor_f(VIf(Bf2), VOf(Bf5));
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf2), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf0), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf5), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf12), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf6), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_neg_f(VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf12), VIf(Bf1), VOf(Bf1));
    __hv_biquad_f(&sBiquad_s_WeHJoxYj, VIf(Bf11), VIf(Bf2), VIf(Bf1), VIf(Bf5), VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf4), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_div_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf7), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_varread_f(&sVarf_tbSNPr5E, VOf(Bf3));
    __hv_varread_f(&sVarf_nu8YY4hF, VOf(Bf6));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_l2EbGRHa, VOf(Bf3));
    __hv_rpole_f(&sRPole_yUplkRd5, VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_phasor_k_f(&sPhasor_r6MaoSfR, VOf(Bf6));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf1));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf1));
    __hv_mul_f(VIf(Bf5), VIf(Bf1), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf11), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf12), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf1), VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf11), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf6), VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf11));
    __hv_sub_f(VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf11));
    __hv_mul_f(VIf(Bf1), VIf(Bf11), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf2), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf0), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf11), VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf6), VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_floor_f(VIf(Bf11), VOf(Bf0));
    __hv_sub_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_abs_f(VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf11), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf0));
    __hv_mul_f(VIf(Bf11), VIf(Bf0), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf5), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf0), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_avZpiXPU, VOf(Bf2));
    __hv_varread_f(&sVarf_h34a9dd9, VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_O2sEpa3M, VOf(Bf2));
    __hv_rpole_f(&sRPole_m2Phse3a, VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf3), VIf(Bf12), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_Yb11eBXB, VOf(Bf12));
    __hv_mul_f(VIf(Bf1), VIf(Bf12), VOf(Bf12));
    __hv_line_f(&sLine_uVpc7R6U, VOf(Bf1));
    __hv_mul_f(VIf(Bf12), VIf(Bf1), VOf(Bf12));
    __hv_var_k_f(VOf(Bf3), 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f);
    __hv_mul_f(VIf(Bf12), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f);
    __hv_line_f(&sLine_9vruFHkq, VOf(Bf5));
    __hv_add_f(VIf(Bf2), VIf(Bf5), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf9), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_div_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf6), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_JdZyqtot, VOf(Bf6));
    __hv_div_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_floor_f(VIf(Bf2), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf10), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf0), VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf9), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_div_f(VIf(Bf11), VIf(Bf13), VOf(Bf13));
    __hv_floor_f(VIf(Bf6), VOf(Bf11));
    __hv_sub_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_abs_f(VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf11));
    __hv_mul_f(VIf(Bf6), VIf(Bf11), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf0), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf2), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf11), VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf11), VIf(Bf2), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf11), VIf(Bf2), VOf(Bf11));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_nSj554IE, VIf(Bf3), VIf(Bf8), VIf(Bf2), VIf(Bf6), VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf0), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf9), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf0), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf9));
    __hv_var_k_f(VOf(Bf6), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_var_k_f(VOf(Bf8), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_fma_f(VIf(Bf9), VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_div_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf0), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf8), VIf(Bf0), VOf(Bf8));
    __hv_pow_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf6), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_div_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f);
    __hv_pow_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_dvvQLlOg, VOf(Bf8));
    __hv_mul_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf7), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_1NxvoTUo, VOf(Bf7));
    __hv_add_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf5), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf2), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_min_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_div_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_PN3xxJ2Y, VOf(Bf0));
    __hv_div_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf2));
    __hv_sub_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf7), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_abs_f(VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf2), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf7), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf7), VOf(Bf2));
    __hv_mul_f(VIf(Bf7), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf7), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf2), VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_div_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_floor_f(VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf0), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf2), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf7), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf8), VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_neg_f(VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf13), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_biquad_f(&sBiquad_s_hoo2mpF8, VIf(Bf6), VIf(Bf8), VIf(Bf3), VIf(Bf0), VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf5), VIf(Bf1), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf1), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_div_f(VIf(Bf12), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_varread_f(&sVarf_ynMMAGA3, VOf(Bf12));
    __hv_varread_f(&sVarf_vnM2GfIV, VOf(Bf5));
    __hv_mul_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_hwjjwIAe, VOf(Bf12));
    __hv_rpole_f(&sRPole_BeXUigXW, VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_phasor_k_f(&sPhasor_cEnzzTRl, VOf(Bf5));
    __hv_var_k_f(VOf(Bf2), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_floor_f(VIf(Bf2), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf2), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf0));
    __hv_mul_f(VIf(Bf2), VIf(Bf0), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf6), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf0), VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf5), VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf8));
    __hv_sub_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf0), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf0), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf8), VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf3), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf13), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf13), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_var_k_f(VOf(Bf8), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf5), VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf13));
    __hv_sub_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_abs_f(VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf13), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf8), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf13));
    __hv_mul_f(VIf(Bf8), VIf(Bf13), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf0), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf2), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf13), VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_myaMYuBU, VOf(Bf3));
    __hv_varread_f(&sVarf_M02YIJJ3, VOf(Bf2));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_mwAoAELZ, VOf(Bf3));
    __hv_rpole_f(&sRPole_r4NhOlRJ, VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf12), VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_F2Fkra67, VOf(Bf6));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_Gi8YR2TJ, VOf(Bf0));
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf6));
    __hv_var_k_f(VOf(Bf12), 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f);
    __hv_mul_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf3), 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f);
    __hv_line_f(&sLine_LEGR74Q9, VOf(Bf2));
    __hv_add_f(VIf(Bf3), VIf(Bf2), VOf(Bf3));
    __hv_var_k_f(VOf(Bf13), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf7), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf13), VIf(Bf7), VOf(Bf7));
    __hv_div_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf5), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_VioDJkD5, VOf(Bf5));
    __hv_div_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf13));
    __hv_sub_f(VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf13), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf13), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf3), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf13), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf13));
    __hv_mul_f(VIf(Bf3), VIf(Bf13), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf11), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf13), VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf7), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_div_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_floor_f(VIf(Bf5), VOf(Bf11));
    __hv_sub_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf11));
    __hv_mul_f(VIf(Bf5), VIf(Bf11), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf3), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf9), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_fma_f(VIf(Bf11), VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf8));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf8), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf8));
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf9), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_biquad_f(&sBiquad_s_frFtrT0e, VIf(Bf12), VIf(Bf3), VIf(Bf8), VIf(Bf11), VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf5), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf7), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf5), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf7));
    __hv_var_k_f(VOf(Bf11), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf8), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_var_k_f(VOf(Bf3), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_fma_f(VIf(Bf7), VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_div_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf3));
    __hv_pow_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf11), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_div_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f);
    __hv_pow_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_XOBMDNnv, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_mul_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_He7BfjGj, VOf(Bf4));
    __hv_add_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf2), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf8), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_min_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf2), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_div_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_fKudiXxA, VOf(Bf5));
    __hv_div_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf8));
    __hv_sub_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_abs_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf8), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf8));
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf12), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf8), VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_div_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf5), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf4), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf12), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf3), VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_neg_f(VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf12), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_biquad_f(&sBiquad_s_0ZvPLDpt, VIf(Bf11), VIf(Bf4), VIf(Bf5), VIf(Bf3), VIf(Bf8), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf2), VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf0), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_varread_f(&sVarf_Y5LYNmQj, VOf(Bf6));
    __hv_varread_f(&sVarf_exU4GgIm, VOf(Bf2));
    __hv_mul_f(VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_Wu1BAZy2, VOf(Bf6));
    __hv_rpole_f(&sRPole_xWgX2lDM, VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_phasor_k_f(&sPhasor_2iTGWCHV, VOf(Bf2));
    __hv_var_k_f(VOf(Bf8), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf3));
    __hv_sub_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_abs_f(VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf8), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf3));
    __hv_mul_f(VIf(Bf8), VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf11), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_sub_f(VIf(Bf8), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf4), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf2), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf4), VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf10), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf2), VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf10));
    __hv_sub_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_abs_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf10), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf4), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf10));
    __hv_mul_f(VIf(Bf4), VIf(Bf10), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf3), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf8), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf10), VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf3), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_rl3i1Hto, VOf(Bf5));
    __hv_varread_f(&sVarf_aUg6U3ZY, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_GYdx25hS, VOf(Bf5));
    __hv_rpole_f(&sRPole_BgN0lBhn, VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf6), VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_H6hQAdxV, VOf(Bf11));
    __hv_mul_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_line_f(&sLine_94c2rnXF, VOf(Bf3));
    __hv_mul_f(VIf(Bf11), VIf(Bf3), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f);
    __hv_mul_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf5), 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f);
    __hv_line_f(&sLine_NMd3bLgd, VOf(Bf8));
    __hv_add_f(VIf(Bf5), VIf(Bf8), VOf(Bf5));
    __hv_var_k_f(VOf(Bf10), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf12), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_div_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_fXDrMF29, VOf(Bf2));
    __hv_div_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf10));
    __hv_sub_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf10), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf10));
    __hv_mul_f(VIf(Bf5), VIf(Bf10), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf9), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf7), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf10), VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf12), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_div_f(VIf(Bf4), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf4), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_floor_f(VIf(Bf2), VOf(Bf9));
    __hv_sub_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf9), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf7), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf9), VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf4), VIf(Bf7), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf4), VIf(Bf7), VOf(Bf4));
    __hv_mul_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf9), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf7), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_61OtIY4g, VIf(Bf6), VIf(Bf5), VIf(Bf4), VIf(Bf2), VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf12), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf4), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_var_k_f(VOf(Bf5), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_fma_f(VIf(Bf12), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_div_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf9), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf5), VIf(Bf9), VOf(Bf5));
    __hv_pow_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf2), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_div_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf1), 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f);
    __hv_pow_f(VIf(Bf9), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_gPZixf1b, VOf(Bf5));
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_mul_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf5), VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_dXM8P1k0, VOf(Bf1));
    __hv_add_f(VIf(Bf8), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf8), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf4), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_min_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf8), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_div_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf1), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf9), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_BpfeER8P, VOf(Bf9));
    __hv_div_f(VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf9), VIf(Bf1), VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf4));
    __hv_mul_f(VIf(Bf1), VIf(Bf4), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf6), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf1), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf4), VIf(Bf6), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_div_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_floor_f(VIf(Bf9), VOf(Bf5));
    __hv_sub_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf9), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_abs_f(VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf9), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf5));
    __hv_mul_f(VIf(Bf9), VIf(Bf5), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf1), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf9), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf5), VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_neg_f(VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf9), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf13), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_biquad_f(&sBiquad_s_qpT5waGq, VIf(Bf2), VIf(Bf1), VIf(Bf4), VIf(Bf5), VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf8), VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf3), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_div_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_varread_f(&sVarf_01QTtBux, VOf(Bf11));
    __hv_varread_f(&sVarf_pEp7LBuH, VOf(Bf8));
    __hv_mul_f(VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_kz3WlxsF, VOf(Bf11));
    __hv_rpole_f(&sRPole_S7rEDO2g, VIf(Bf8), VIf(Bf11), VOf(Bf11));
    __hv_phasor_k_f(&sPhasor_Yh6BnmRO, VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_floor_f(VIf(Bf9), VOf(Bf5));
    __hv_sub_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf9), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_abs_f(VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf9), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf5));
    __hv_mul_f(VIf(Bf9), VIf(Bf5), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf2), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf5), VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf8), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf1));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf1));
    __hv_mul_f(VIf(Bf5), VIf(Bf1), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf1), VIf(Bf4), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf4), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf13), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf8), VIf(Bf13), VIf(Bf1), VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf13));
    __hv_sub_f(VIf(Bf1), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf13), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf13), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf13), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf13));
    __hv_mul_f(VIf(Bf1), VIf(Bf13), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf9), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_fma_f(VIf(Bf13), VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf5), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_div_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_QiXEwzil, VOf(Bf4));
    __hv_varread_f(&sVarf_WMQN8bce, VOf(Bf9));
    __hv_mul_f(VIf(Bf4), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_WoIzKJzK, VOf(Bf4));
    __hv_rpole_f(&sRPole_FtDZFTsc, VIf(Bf9), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf11), VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_ijN5FsBu, VOf(Bf2));
    __hv_mul_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_3P4petKB, VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf2));
    __hv_var_k_f(VOf(Bf11), 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f);
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf4), 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f);
    __hv_line_f(&sLine_7HspNWeE, VOf(Bf9));
    __hv_add_f(VIf(Bf4), VIf(Bf9), VOf(Bf4));
    __hv_var_k_f(VOf(Bf13), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf6), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_div_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_2t2HFd15, VOf(Bf8));
    __hv_div_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf13));
    __hv_sub_f(VIf(Bf4), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_abs_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf13), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf4), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf13));
    __hv_mul_f(VIf(Bf4), VIf(Bf13), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf7), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf13), VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_div_f(VIf(Bf1), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_floor_f(VIf(Bf8), VOf(Bf7));
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_abs_f(VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf7), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf8), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf7));
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf12), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf8), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf7), VIf(Bf4), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf1), VIf(Bf12), VOf(Bf1));
    __hv_mul_f(VIf(Bf10), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf4), VIf(Bf12), VOf(Bf4));
    __hv_var_k_f(VOf(Bf7), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf4), VIf(Bf12), VOf(Bf4));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf12), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_biquad_f(&sBiquad_s_fr6dMrxf, VIf(Bf11), VIf(Bf8), VIf(Bf1), VIf(Bf7), VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf4), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf6), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf4), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf6), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf6));
    __hv_var_k_f(VOf(Bf7), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf1), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_var_k_f(VOf(Bf8), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_fma_f(VIf(Bf6), VIf(Bf1), VIf(Bf8), VOf(Bf8));
    __hv_div_f(VIf(Bf7), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf8), VIf(Bf4), VOf(Bf8));
    __hv_pow_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf8), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf7), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_div_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f);
    __hv_pow_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_6qDXppRS, VOf(Bf8));
    __hv_mul_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf8), VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_k2DwLNLN, VOf(Bf0));
    __hv_add_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf9), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf1), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_min_f(VIf(Bf9), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf9), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_div_f(VIf(Bf4), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf4), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_QM22area, VOf(Bf4));
    __hv_div_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf11), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf0), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf1), VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf9), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_div_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf10), VIf(Bf9), VOf(Bf9));
    __hv_floor_f(VIf(Bf4), VOf(Bf8));
    __hv_sub_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_abs_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf8), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf8));
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf1), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf0), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf8), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf10), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf10), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf8), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_neg_f(VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_biquad_f(&sBiquad_s_GxkpGxnj, VIf(Bf7), VIf(Bf11), VIf(Bf8), VIf(Bf4), VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_fma_f(VIf(Bf9), VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_varread_f(&sVarf_79qi5uOc, VOf(Bf2));
    __hv_varread_f(&sVarf_P5OyvDsd, VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_sYUgoI3m, VOf(Bf2));
    __hv_rpole_f(&sRPole_f73rxvwt, VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_phasor_k_f(&sPhasor_jVNG1Weq, VOf(Bf9));
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf9), VIf(Bf1), VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf4));
    __hv_mul_f(VIf(Bf1), VIf(Bf4), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf11), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf7), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf1), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf4), VIf(Bf11), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf11), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf9), VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf11));
    __hv_sub_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_abs_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf4), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf11));
    __hv_mul_f(VIf(Bf4), VIf(Bf11), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf8), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf1), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf4), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf11), VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf10), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf9), VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_floor_f(VIf(Bf11), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_abs_f(VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf10), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf10));
    __hv_mul_f(VIf(Bf11), VIf(Bf10), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf1), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf9), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf10), VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_div_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_eVDEFIxw, VOf(Bf8));
    __hv_varread_f(&sVarf_Nua1l6af, VOf(Bf1));
    __hv_mul_f(VIf(Bf8), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_dBRA10fL, VOf(Bf8));
    __hv_rpole_f(&sRPole_CeRpPfsL, VIf(Bf1), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf2), VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_Zu0SSk53, VOf(Bf7));
    __hv_mul_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_H8MWG43z, VOf(Bf4));
    __hv_mul_f(VIf(Bf7), VIf(Bf4), VOf(Bf7));
    __hv_var_k_f(VOf(Bf2), 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f);
    __hv_mul_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf8), 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f);
    __hv_line_f(&sLine_QSrMd8di, VOf(Bf1));
    __hv_add_f(VIf(Bf8), VIf(Bf1), VOf(Bf8));
    __hv_var_k_f(VOf(Bf10), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf0), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf10), VIf(Bf0), VOf(Bf0));
    __hv_div_f(VIf(Bf9), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf9), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf8), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_xyC5Ikvg, VOf(Bf9));
    __hv_div_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf8), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_floor_f(VIf(Bf8), VOf(Bf10));
    __hv_sub_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_abs_f(VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf10), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf10), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf8), VOf(Bf10));
    __hv_mul_f(VIf(Bf8), VIf(Bf10), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf12), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf6), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf10), VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf0), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf13), VOf(Bf13));
    __hv_div_f(VIf(Bf11), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_floor_f(VIf(Bf9), VOf(Bf12));
    __hv_sub_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_abs_f(VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf12), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf12));
    __hv_mul_f(VIf(Bf9), VIf(Bf12), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf8), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf6), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf12), VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf11), VIf(Bf6), VOf(Bf11));
    __hv_var_k_f(VOf(Bf8), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf11), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf12), VIf(Bf6), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_xUZlOHWk, VIf(Bf2), VIf(Bf9), VIf(Bf6), VIf(Bf8), VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf11), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf11), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf0));
    __hv_var_k_f(VOf(Bf8), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_var_k_f(VOf(Bf9), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_fma_f(VIf(Bf0), VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_div_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf9), VIf(Bf11), VOf(Bf9));
    __hv_pow_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf9), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf8), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf8), VIf(Bf11), VOf(Bf11));
    __hv_div_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf3), 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f);
    __hv_pow_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_t7PegvxC, VOf(Bf9));
    __hv_mul_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_mul_f(VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf9), VIf(Bf3), VIf(Bf8), VOf(Bf8));
    __hv_varread_f(&sVarf_CfalTCcj, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf6), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_min_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf1), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_div_f(VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf11), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf3), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_1BF7sQxY, VOf(Bf11));
    __hv_div_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf6));
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf6));
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf0), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf6), VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf1), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf13), VOf(Bf13));
    __hv_div_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_floor_f(VIf(Bf11), VOf(Bf9));
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_abs_f(VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf9), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf9));
    __hv_mul_f(VIf(Bf11), VIf(Bf9), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf6), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf3), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf9), VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf9), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_neg_f(VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf13), VIf(Bf1), VOf(Bf1));
    __hv_biquad_f(&sBiquad_s_WpkmdToz, VIf(Bf8), VIf(Bf11), VIf(Bf2), VIf(Bf9), VIf(Bf6), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf1), VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf4), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_div_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_varread_f(&sVarf_8BqLfaLW, VOf(Bf7));
    __hv_varread_f(&sVarf_jX08Ccs3, VOf(Bf1));
    __hv_mul_f(VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_HwQjMaSb, VOf(Bf7));
    __hv_rpole_f(&sRPole_jOzfV90i, VIf(Bf1), VIf(Bf7), VOf(Bf7));
    __hv_phasor_k_f(&sPhasor_cABduJ25, VOf(Bf1));
    __hv_var_k_f(VOf(Bf6), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_floor_f(VIf(Bf6), VOf(Bf9));
    __hv_sub_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_abs_f(VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf9), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf6), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf9));
    __hv_mul_f(VIf(Bf6), VIf(Bf9), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf8), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_sub_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_fma_f(VIf(Bf9), VIf(Bf11), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf11), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_var_k_f(VOf(Bf9), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf1), VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_floor_f(VIf(Bf9), VOf(Bf11));
    __hv_sub_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf9), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_abs_f(VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf9), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf9), VIf(Bf9), VOf(Bf11));
    __hv_mul_f(VIf(Bf9), VIf(Bf11), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf2), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf6), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf11), VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf2), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf13), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf1), VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_floor_f(VIf(Bf11), VOf(Bf13));
    __hv_sub_f(VIf(Bf11), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_abs_f(VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf13), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf11), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf13));
    __hv_mul_f(VIf(Bf11), VIf(Bf13), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf9), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf6), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf1), VIf(Bf6), VOf(Bf6));
    __hv_sub_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf13), VIf(Bf9), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf9), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_div_f(VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_ULEXtwvp, VOf(Bf2));
    __hv_varread_f(&sVarf_xcXCOi6K, VOf(Bf6));
    __hv_mul_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_IJfyM2us, VOf(Bf2));
    __hv_rpole_f(&sRPole_FFQfKN0R, VIf(Bf6), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf9), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_fma_f(VIf(Bf7), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_8xRFsorC, VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_line_f(&sLine_vRXrCX88, VOf(Bf9));
    __hv_mul_f(VIf(Bf8), VIf(Bf9), VOf(Bf8));
    __hv_var_k_f(VOf(Bf7), 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f);
    __hv_mul_f(VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf2), 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f);
    __hv_line_f(&sLine_pE8HM6eJ, VOf(Bf6));
    __hv_add_f(VIf(Bf2), VIf(Bf6), VOf(Bf2));
    __hv_var_k_f(VOf(Bf13), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf3), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf13), VIf(Bf3), VOf(Bf3));
    __hv_div_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_Wzdz5YYY, VOf(Bf1));
    __hv_div_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_floor_f(VIf(Bf2), VOf(Bf13));
    __hv_sub_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf13), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf2), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf13));
    __hv_mul_f(VIf(Bf2), VIf(Bf13), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf12), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf0), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf13), VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_div_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_floor_f(VIf(Bf1), VOf(Bf12));
    __hv_sub_f(VIf(Bf1), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf12), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf12), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf12), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf12));
    __hv_mul_f(VIf(Bf1), VIf(Bf12), VOf(Bf13));
    __hv_mul_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf0), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf12), VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf11), VIf(Bf0), VOf(Bf11));
    __hv_mul_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf2));
    __hv_var_k_f(VOf(Bf12), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf10), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_UMFbjyN4, VIf(Bf7), VIf(Bf12), VIf(Bf11), VIf(Bf1), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf11), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_var_k_f(VOf(Bf12), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_fma_f(VIf(Bf3), VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_div_f(VIf(Bf1), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf12), VIf(Bf2), VOf(Bf12));
    __hv_pow_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf1), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_div_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f);
    __hv_pow_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_WaXArmjW, VOf(Bf12));
    __hv_mul_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf12), VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_hhnJelk6, VOf(Bf5));
    __hv_add_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf11), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_div_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf2), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_uuzYHu3R, VOf(Bf2));
    __hv_div_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf11));
    __hv_sub_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf11));
    __hv_mul_f(VIf(Bf5), VIf(Bf11), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf7), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf11), VIf(Bf7), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_div_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_floor_f(VIf(Bf2), VOf(Bf12));
    __hv_sub_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf12), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf12));
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf11), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf5), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf12), VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_neg_f(VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf12), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf7), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_biquad_f(&sBiquad_s_MGLVvw8p, VIf(Bf1), VIf(Bf5), VIf(Bf11), VIf(Bf2), VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf6), VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_div_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf4), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf4), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_varread_f(&sVarf_Ur4adPC4, VOf(Bf8));
    __hv_varread_f(&sVarf_x32YE819, VOf(Bf6));
    __hv_mul_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_j5okvBiY, VOf(Bf8));
    __hv_rpole_f(&sRPole_rDQCcsks, VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_phasor_k_f(&sPhasor_RgB7pHdJ, VOf(Bf6));
    __hv_var_k_f(VOf(Bf12), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_floor_f(VIf(Bf12), VOf(Bf2));
    __hv_sub_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf12), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_abs_f(VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf12), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf12), VOf(Bf2));
    __hv_mul_f(VIf(Bf12), VIf(Bf2), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf1), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf11), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf12), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf2), VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_var_k_f(VOf(Bf2), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf6), VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_floor_f(VIf(Bf2), VOf(Bf5));
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf2), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_abs_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf2), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf5));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf12));
    __hv_mul_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf10), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_sub_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf5), VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf10), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_fms_f(VIf(Bf6), VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf10));
    __hv_sub_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf10), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf10));
    __hv_mul_f(VIf(Bf5), VIf(Bf10), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf2), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf12), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_sub_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf10), VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf2), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_div_f(VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_Rz3kZvOT, VOf(Bf11));
    __hv_varread_f(&sVarf_ANyncv8H, VOf(Bf12));
    __hv_mul_f(VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_varread_f(&sVarf_6oBVCur5, VOf(Bf11));
    __hv_rpole_f(&sRPole_eSt3TrFR, VIf(Bf12), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf2), 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f, 7.0f);
    __hv_div_f(VIf(Bf11), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf8), VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_CgiMPPpD, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_zJ57bCVQ, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf1));
    __hv_var_k_f(VOf(Bf8), 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f, 0.707946f);
    __hv_mul_f(VIf(Bf1), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf11), 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f, 1000.0f);
    __hv_line_f(&sLine_dRgh5hWp, VOf(Bf12));
    __hv_add_f(VIf(Bf11), VIf(Bf12), VOf(Bf11));
    __hv_var_k_f(VOf(Bf10), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf7), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf10), VIf(Bf7), VOf(Bf7));
    __hv_div_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf6), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_varread_f(&sVarf_73fO1cEi, VOf(Bf6));
    __hv_div_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_floor_f(VIf(Bf11), VOf(Bf10));
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_abs_f(VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf10), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf10));
    __hv_mul_f(VIf(Bf11), VIf(Bf10), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf0), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf3), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf11), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf10), VIf(Bf0), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf7), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf7), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf13), VOf(Bf13));
    __hv_div_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_floor_f(VIf(Bf6), VOf(Bf0));
    __hv_sub_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_abs_f(VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf0));
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf10));
    __hv_mul_f(VIf(Bf10), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf11), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf3), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf11), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf13), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf13), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf6), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_wXglfVU3, VIf(Bf8), VIf(Bf0), VIf(Bf5), VIf(Bf11), VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf6), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf7), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf6), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf6), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf6), VOf(Bf7));
    __hv_var_k_f(VOf(Bf11), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_var_k_f(VOf(Bf0), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_fma_f(VIf(Bf7), VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_div_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf6), 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f, 5.0f);
    __hv_mul_f(VIf(Bf0), VIf(Bf6), VOf(Bf0));
    __hv_pow_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf11), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_div_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf0), 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f, 4.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_eT6qixFO, VOf(Bf11));
    __hv_mul_f(VIf(Bf0), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf11), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf6), VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_dDlQufKU, VOf(Bf4));
    __hv_add_f(VIf(Bf12), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf12), 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f, 0.404061f);
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_var_k_f(VOf(Bf5), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_min_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf12), 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f, 0.1f);
    __hv_max_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_div_f(VIf(Bf11), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf11), 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f, 20000.0f);
    __hv_min_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf4), 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f, 20.0f);
    __hv_max_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_u3uK0HQJ, VOf(Bf11));
    __hv_div_f(VIf(Bf4), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf5));
    __hv_sub_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_abs_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf8), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf13), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf7), VIf(Bf13), VOf(Bf13));
    __hv_sub_f(VIf(Bf4), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf5), VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf12), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_div_f(VIf(Bf6), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_sub_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf13), VIf(Bf12), VOf(Bf12));
    __hv_floor_f(VIf(Bf11), VOf(Bf6));
    __hv_sub_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_abs_f(VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf11), VIf(Bf11), VOf(Bf6));
    __hv_mul_f(VIf(Bf11), VIf(Bf6), VOf(Bf8));
    __hv_mul_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf4), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf11), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf6), VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f);
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf6), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf6), VOf(Bf6));
    __hv_neg_f(VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_mul_f(VIf(Bf8), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf13), VIf(Bf4), VOf(Bf4));
    __hv_biquad_f(&sBiquad_s_SuTj3QdB, VIf(Bf0), VIf(Bf11), VIf(Bf6), VIf(Bf4), VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf12), VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_div_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf9), 0.7f, 0.7f, 0.7f, 0.7f, 0.7f, 0.7f, 0.7f, 0.7f);
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_min_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf9), -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f);
    __hv_max_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_oVTSebHs, VOf(Bf2));
    __hv_rpole_f(&sRPole_Ji8SrxsK, VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_BdXhZ9nQ, VIf(Bf2), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_sub_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_1g0aw1V9, VOf(Bf2));
    __hv_mul_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf9), 0.7f, 0.7f, 0.7f, 0.7f, 0.7f, 0.7f, 0.7f, 0.7f);
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf9), VIf(O0), VOf(O0));
    __hv_add_f(VIf(Bf9), VIf(O1), VOf(O1));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed
}

int Heavy_epmk::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s)
  float **const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_epmk::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 0 channel(s), uninterleave
  float *const bIn = NULL;

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
