using UnityEngine;

public class MoraController : MonoBehaviour
{
    [Header("Camera Setup")]
    public Camera mainCamera;

    [Header("Character")]
    public GameObject characterRoot;

    void Start()
    {
        // Setup camera nhìn vào nhân vật
        if (mainCamera == null)
            mainCamera = Camera.main;

        if (mainCamera != null)
        {
            mainCamera.transform.position = new Vector3(0, 1.2f, -2.5f);
            mainCamera.transform.LookAt(new Vector3(0, 1.0f, 0));
            mainCamera.backgroundColor = new Color(0, 0, 0, 0);
            mainCamera.clearFlags = CameraClearFlags.SolidColor;
        }

        // Setup lighting
        RenderSettings.ambientLight = new Color(0.8f, 0.8f, 0.8f);
    }

    void Update()
    {
        // Nhân vật tự xoay nhẹ để test
        if (characterRoot != null)
        {
            characterRoot.transform.Rotate(Vector3.up, 20f * Time.deltaTime);
        }
    }

    // Gọi từ Android để dừng xoay
    public void StopRotation()
    {
        enabled = false;
    }
}