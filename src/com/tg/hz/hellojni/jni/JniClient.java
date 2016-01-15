package com.tg.hz.hellojni.jni;

public class JniClient {
	static public native String AddStr(String strA,String strB);
	static public native int AddInt(int intA,int intB);
	static {
        System.loadLibrary("HelloJniTest");
    }

}
