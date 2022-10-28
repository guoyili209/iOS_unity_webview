﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using Newtonsoft.Json;


public class H5WebView : MonoBehaviour
{
    [DllImport("__Internal")]
    // public static extern void IOSshowWebView(string URL, int pixelSpace);
    public static extern void CSharpMessage(int msgType,string json);
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void OnButtonClick(){
        JSONTest obj = new JSONTest();
        // obj.url = "http://192.168.11.206:3000/index.html";
        obj.url = "http://www.baidu.com";
            obj.msg = "test";
            obj.msgType = 100;
        string json = JsonConvert.SerializeObject(obj);
        CSharpMessage(100,json);
        // IOSshowWebView("http://www.baidu.com",1);
        Debug.Log(json);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
// [System.Serializable]
public class JSONTest{
       public string url{get;set;}
   public int msgType{get;set;}
   public string msg{get;set;}
}
