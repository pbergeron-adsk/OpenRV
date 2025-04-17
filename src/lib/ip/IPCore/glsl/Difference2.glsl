//
// Copyright (C) 2023  Autodesk, Inc. All Rights Reserved. 
// 
// SPDX-License-Identifier: Apache-2.0 
//
//glBlendEquation(GL_FUNC_SUBTRACT);
//glBlendFunc(GL_ONE, GL_ONE);

vec4 main(const in vec4 i0, const in vec4 i1)
{
    float slope = 1.0f;

    return vec4(clamp(abs(i0.r-i1.r)*slope, 0.0, 1.0),
                clamp(abs(i0.g-i1.g)*slope, 0.0, 1.0),
                clamp(abs(i0.b-i1.b)*slope, 0.0, 1.0),
                clamp(abs(i0.a-i1.a)*slope, 0.0, 1.0));
}
