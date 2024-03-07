uniform float4 tint;
uniform mat4 modelMatrix;
uniform mat4 projectionMatrix;

in vec2 vPos;

out vec4 color;

void main()
{
    gl_Position = MVP * vec4(vPos, 0.0, 1.0);
    color = tint;
}


struct v2f {
  float4 position [[position]];
  half4 color;
  float2 texCoord;
};

struct VertexData {
  float3 position;
};

struct TexCoordData {
  float2 texCoord;
};

v2f vertex vertexMain(device const VertexData* vertexData [[buffer(0)]],
                      device const TexCoordData* texCoordData [[buffer(1)]],
                      constant VertexUniforms &uniforms [[buffer(2)]],
                      uint vertexId [[vertex_id]]) {
  v2f o;
  
  float4 pos = float4(vertexData[vertexId].position, 1.0);
  o.position = uniforms.projectionMatrix * uniforms.modelMatrix * pos;
  o.color = half4(uniforms.tint.rgba);
  o.texCoord = texCoordData[vertexId].texCoord.xy;
  return o;
}
