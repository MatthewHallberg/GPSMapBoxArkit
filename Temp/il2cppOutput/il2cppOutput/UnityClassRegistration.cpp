template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; 
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; 
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; 
class TrailRenderer; 
class Rigidbody; 
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>();
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 76 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. MeshFilter
	RegisterClass<MeshFilter>();
	//6. Renderer
	RegisterClass<Renderer>();
	//7. GUILayer
	RegisterClass<GUILayer>();
	//8. Light
	RegisterClass<Light>();
	//9. Mesh
	RegisterClass<Mesh>();
	//10. NamedObject
	RegisterClass<NamedObject>();
	//11. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//12. NetworkView
	RegisterClass<NetworkView>();
	//13. Shader
	RegisterClass<Shader>();
	//14. Material
	RegisterClass<Material>();
	//15. Sprite
	RegisterClass<Sprite>();
	//16. Texture
	RegisterClass<Texture>();
	//17. Texture2D
	RegisterClass<Texture2D>();
	//18. RenderTexture
	RegisterClass<RenderTexture>();
	//19. Transform
	RegisterClass<Transform>();
	//20. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//21. ParticleSystem
	RegisterClass<ParticleSystem>();
	//22. Collider
	RegisterClass<Collider>();
	//23. MeshCollider
	RegisterClass<MeshCollider>();
	//24. AudioClip
	RegisterClass<AudioClip>();
	//25. SampleClip
	RegisterClass<SampleClip>();
	//26. Animation
	RegisterClass<Animation>();
	//27. Animator
	RegisterClass<Animator>();
	//28. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//29. UI::Canvas
	RegisterClass<UI::Canvas>();
	//30. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//31. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//32. MeshRenderer
	RegisterClass<MeshRenderer>();
	//33. BoxCollider
	RegisterClass<BoxCollider>();
	//34. SphereCollider
	RegisterClass<SphereCollider>();
	//35. PreloadData
	RegisterClass<PreloadData>();
	//36. Cubemap
	RegisterClass<Cubemap>();
	//37. Texture3D
	RegisterClass<Texture3D>();
	//38. Texture2DArray
	RegisterClass<Texture2DArray>();
	//39. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//40. TimeManager
	RegisterClass<TimeManager>();
	//41. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//42. GameManager
	RegisterClass<GameManager>();
	//43. AudioManager
	RegisterClass<AudioManager>();
	//44. InputManager
	RegisterClass<InputManager>();
	//45. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//46. QualitySettings
	RegisterClass<QualitySettings>();
	//47. TextAsset
	RegisterClass<TextAsset>();
	//48. PhysicsManager
	RegisterClass<PhysicsManager>();
	//49. TagManager
	RegisterClass<TagManager>();
	//50. ScriptMapper
	RegisterClass<ScriptMapper>();
	//51. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//52. MonoScript
	RegisterClass<MonoScript>();
	//53. MonoManager
	RegisterClass<MonoManager>();
	//54. PlayerSettings
	RegisterClass<PlayerSettings>();
	//55. BuildSettings
	RegisterClass<BuildSettings>();
	//56. ResourceManager
	RegisterClass<ResourceManager>();
	//57. NetworkManager
	RegisterClass<NetworkManager>();
	//58. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//59. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//60. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//61. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//62. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>();
	//63. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//64. LevelGameManager
	RegisterClass<LevelGameManager>();
	//65. AnimationClip
	RegisterClass<AnimationClip>();
	//66. Motion
	RegisterClass<Motion>();
	//67. AudioListener
	RegisterClass<AudioListener>();
	//68. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//69. RenderSettings
	RegisterClass<RenderSettings>();
	//70. FlareLayer
	RegisterClass<FlareLayer>();
	//71. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//72. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//73. LightmapSettings
	RegisterClass<LightmapSettings>();
	//74. LightProbes
	RegisterClass<LightProbes>();
	//75. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();

}
