package com.example.paintapp

import android.graphics.Color
import android.graphics.Color.RED
import android.graphics.Paint
import android.graphics.Path
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ImageButton
import android.widget.LinearLayout
import android.widget.Toast
import com.example.paintapp.PainView.Companion.currentBrush

class MainActivity : AppCompatActivity(){

    companion object {
        var path = Path()
        var paintbrush = Paint()
    }
    lateinit var toolbar: LinearLayout
    lateinit var redcolor : ImageButton
    lateinit var bluecolor : ImageButton
    lateinit var whitecolor : ImageButton
    lateinit var blackcolor : ImageButton


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        supportActionBar?.hide()

        toolbar = findViewById(R.id.toolbar)
        redcolor = findViewById(R.id.redcolor)
        bluecolor = findViewById(R.id.bluecolor)
        whitecolor = findViewById(R.id.whitecolor)
        blackcolor = findViewById(R.id.blackcolor)

         redcolor.setOnClickListener {
            Toast.makeText(this@MainActivity
                , "Clicked Red colour"
                , Toast.LENGTH_SHORT).show()
             paintbrush.color = Color.RED
             currentColor(paintbrush.color)
         }
        bluecolor.setOnClickListener {
            Toast.makeText(this@MainActivity
                , "Clicked Blue color"
                , Toast.LENGTH_SHORT).show()
            paintbrush.color = Color.BLUE
            currentColor(paintbrush.color)

        }
        whitecolor.setOnClickListener {
            Toast.makeText(this@MainActivity
                , "Clicked Reset"
                , Toast.LENGTH_SHORT).show()
                 path.reset()

        }
        blackcolor.setOnClickListener {
            Toast.makeText(this@MainActivity
                , "Clicked Black color"
                , Toast.LENGTH_SHORT).show()
            paintbrush.color = Color.BLACK
            currentColor(paintbrush.color)
        }

    }

    private fun currentColor(color: Int){
        currentBrush  = color
        path = Path()
    }
}