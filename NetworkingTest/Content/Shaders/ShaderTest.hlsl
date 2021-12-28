// Converts from pure Hue to linear RGB
float3 Hue_To_RGB(float hue)
{
    float R = abs(hue * 6. - 3.) - 1.;
    float G = 2. - abs(hue * 6. - 2.);
    float B = 2. - abs(hue * 6. - 4.);
    return clamp(float3(R,G,B), 0., 1.);
}

// Converts from HSV to linear RGB
float3 HSV_To_RGB(float3 HSV)
{
    float3 rgb = Hue_To_RGB(HSV.x);
    return ((rgb - 1.0) * HSV.y + 1.0) * HSV.z;
}

float2 GetUV(){
    // Normalized pixel coordinates (from 0 to 1)
    float2 UV = FinalCoord/ScreenRes.xy;
    return UV;
}

float3 MainImage(){
    // Time varying pixel color
    float3 Col = HSV_To_RGB(float3(HueVal, UV.xy));

    //float2 UV = (FinalCoord.xy - ScreenRes.xy / 2.0f) / ScreenRes.y;

    // Output to screen
    return float3(Col);
}
