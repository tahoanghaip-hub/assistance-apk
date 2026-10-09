package com.mora.assistant

import android.content.res.Configuration
import android.os.Bundle
import android.widget.FrameLayout
import androidx.appcompat.app.AppCompatActivity
import com.unity3d.player.IUnityPlayerLifecycleEvents
import com.unity3d.player.UnityPlayer
import com.mora.assistant.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity(), IUnityPlayerLifecycleEvents {

    private lateinit var binding: ActivityMainBinding
    private var unityPlayer: UnityPlayer? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        // Khởi tạo UnityPlayer duy nhất với Context và IUnityPlayerLifecycleEvents
        val player = UnityPlayer(this, this)
        unityPlayer = player

        binding.unityContainer.addView(
            player,
            FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT,
                FrameLayout.LayoutParams.MATCH_PARENT,
            ),
        )
        player.requestFocus()

        binding.tvStatus.text = getString(R.string.mora_ready)
    }

    // IUnityPlayerLifecycleEvents
    override fun onUnityPlayerUnloaded() {
        moveTaskToBack(true)
    }

    override fun onUnityPlayerQuitted() {
    }

    override fun onStart() {
        super.onStart()
        unityPlayer?.onStart()
    }

    override fun onStop() {
        super.onStop()
        unityPlayer?.onStop()
    }

    override fun onPause() {
        super.onPause()
        unityPlayer?.onPause()
    }

    override fun onResume() {
        super.onResume()
        unityPlayer?.onResume()
    }

    override fun onDestroy() {
        unityPlayer?.destroy()
        unityPlayer = null
        super.onDestroy()
    }

    override fun onLowMemory() {
        super.onLowMemory()
        unityPlayer?.lowMemory()
    }

    override fun onTrimMemory(level: Int) {
        super.onTrimMemory(level)
        unityPlayer?.lowMemory()
    }

    override fun onConfigurationChanged(newConfig: Configuration) {
        super.onConfigurationChanged(newConfig)
        unityPlayer?.configurationChanged(newConfig)
    }

    override fun onWindowFocusChanged(hasFocus: Boolean) {
        super.onWindowFocusChanged(hasFocus)
        unityPlayer?.windowFocusChanged(hasFocus)
    }
}