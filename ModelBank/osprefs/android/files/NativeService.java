package com.iexceed.appzillonapp;

import android.app.Activity;
import android.content.Context;
import android.webkit.JavascriptInterface;
import android.webkit.WebView;

public class NativeService {
	private Context context;
	private Activity activity;
	private WebView mainWebView;
	
	public NativeService(Context c, Activity a, WebView w) {
		context = c;
		activity = a;
		mainWebView = w;
	}
	/**
	 * Write your custom functionality here
	 * @param wv
	 * @param act
	 * @param jsonText
	 */
	public void nativeServiceEntry(WebView wv,Activity act,String jsonText) 
	{
	//your code goes here
	}
	
	@JavascriptInterface
	public void nativeServiceExt(String jsonText){
		try{
		nativeServiceEntry(mainWebView,activity,jsonText);
		}catch (Exception e) {
			e.printStackTrace();
		}
	}
}
