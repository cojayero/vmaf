/**
 *
 *  Copyright 2016-2020 Netflix, Inc.
 *
 *     Licensed under the BSD+Patent License (the "License");
 *     you may not use this file except in compliance with the License.
 *     You may obtain a copy of the License at
 *
 *         https://opensource.org/licenses/BSDplusPatent
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 *
 */

#ifndef __VMAF_SRC_BOOTSTRAP_H__
#define __VMAF_SRC_BOOTSTRAP_H__

int vmaf_bootstrap_predict_score_at_index(VmafModel *model, unsigned model_cnt,
                                          VmafFeatureCollector *feature_collector,
                                          unsigned index, double *vmaf_score,
                                          double *ci_lo, double *ci_hi);

#endif /* __VMAF_SRC_BOOTSTRAP_H__ */