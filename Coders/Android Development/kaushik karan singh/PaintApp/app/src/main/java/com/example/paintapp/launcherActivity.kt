package com.example.paintapp

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.view.View
import android.view.animation.Animation
import com.airbnb.lottie.LottieAnimationView

class launcherActivity : AppCompatActivity() {
    lateinit var animation : LottieAnimationView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_launcher)

           animation = findViewById(R.id.animation)

        Handler(Looper.getMainLooper()).postDelayed({
            val intent = Intent(this@launcherActivity, MainActivity::class.java)
            startActivity(intent)
            finish()
        },5000)

        animation.visibility = View.VISIBLE
        animation.playAnimation()


    }
}