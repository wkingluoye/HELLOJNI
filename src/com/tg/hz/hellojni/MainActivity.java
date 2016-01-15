package com.tg.hz.hellojni;

import com.tg.hz.hellojni.jni.JniClient;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Toast;

public class MainActivity extends Activity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		String str = JniClient.AddStr("test", "testGit");
		Toast.makeText(this, str, Toast.LENGTH_LONG).show();
		int i = JniClient.AddInt(1,2);
		Toast.makeText(this, i+"", Toast.LENGTH_LONG).show();
	}
}
