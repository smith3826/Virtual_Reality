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

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

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

}

void RegisterAllClasses()
{
	//Total: 95 classes
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

	//24. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//25. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//26. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//27. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//28. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//29. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//30. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//31. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//32. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//33. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//34. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//35. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//36. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//37. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//38. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//39. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//40. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//41. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//42. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//43. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//44. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//45. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//46. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//47. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//48. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//49. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//50. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//51. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//52. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//53. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//54. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//55. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//56. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//57. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//58. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//59. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//60. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//61. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//62. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//63. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//64. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//65. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//66. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//67. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//68. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//69. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//70. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//71. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//72. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//73. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//74. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//75. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//76. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//77. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//78. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//79. TerrainCollider
	void RegisterClass_TerrainCollider();
	RegisterClass_TerrainCollider();

	//80. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//81. TerrainData
	void RegisterClass_TerrainData();
	RegisterClass_TerrainData();

	//82. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//83. Tree
	void RegisterClass_Tree();
	RegisterClass_Tree();

	//84. LODGroup
	void RegisterClass_LODGroup();
	RegisterClass_LODGroup();

	//85. Terrain
	void RegisterClass_Terrain();
	RegisterClass_Terrain();

	//86. BillboardAsset
	void RegisterClass_BillboardAsset();
	RegisterClass_BillboardAsset();

	//87. BillboardRenderer
	void RegisterClass_BillboardRenderer();
	RegisterClass_BillboardRenderer();

	//88. SpeedTreeWindAsset
	void RegisterClass_SpeedTreeWindAsset();
	RegisterClass_SpeedTreeWindAsset();

	//89. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//90. AudioMixerSnapshot
	void RegisterClass_AudioMixerSnapshot();
	RegisterClass_AudioMixerSnapshot();

	//91. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//92. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//93. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//94. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
