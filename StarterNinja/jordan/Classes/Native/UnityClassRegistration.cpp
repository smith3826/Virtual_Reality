struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
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

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 78 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//10. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//11. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//12. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//15. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//16. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//17. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//18. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//19. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//20. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//21. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//22. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//23. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//24. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//25. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//26. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//27. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//28. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//29. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//30. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//31. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//32. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//33. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//34. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//35. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//36. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//37. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//38. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//39. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//40. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//41. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//42. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//43. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//44. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//45. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//46. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//47. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//48. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//49. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//50. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//51. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//52. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//53. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//54. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//55. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//56. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//57. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//58. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//59. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//60. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//61. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//62. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//63. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//64. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//65. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//66. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//67. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//68. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//69. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//70. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//71. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//72. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//73. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//74. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//75. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//76. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//77. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
