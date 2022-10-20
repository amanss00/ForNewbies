package com.example.ilovejetpack

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.painter.Painter
import androidx.compose.ui.res.colorResource
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.text.font.Font
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.font.FontWeight.Companion.ExtraBold
import androidx.compose.ui.text.font.GenericFontFamily
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.TextUnit
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.ilovejetpack.ui.theme.jetpacktheme
import java.util.jar.Attributes

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            JamSubmission1Theme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colors.background
                ) {
                    NameEmoji()
                }
            }
        }
    }
}

@Composable
fun NameEmoji() {
    val Montserrat = FontFamily(
        Font(R.font.m_extrabold)
    )
    Column(content = {
        val image = painterResource(id = R.drawable.jetpackcompose_logo)
        Image(painter = image,
            contentDescription = null,
            modifier = Modifier.padding(top = 80.dp, end = 15.dp)
            )
        Text(text = stringResource(id = R.string.input_name),
            fontSize = 34.sp,
            color = colorResource(id = R.color.name_color),
            modifier = Modifier.padding(top = 20.dp, start = 30.dp),
            fontFamily = Montserrat)
        val imageEmoji = painterResource(id = R.drawable.download)
        Image(painter = imageEmoji,
            contentDescription = null,
            modifier = Modifier.padding(top = 10.dp, start = 170.dp)
        )
        Text(text = stringResource(id = R.string.jetpack_name),
            fontSize = 36.sp,
            fontFamily = Montserrat,
            color = colorResource(id = R.color.jetpack_color),
            modifier = Modifier.padding(top = 10.dp, start = 36.dp)
        )
    })
}


@Preview(showBackground = true)
@Composable
fun DefaultPreview() {
    jetpacktheme {

    }
}
