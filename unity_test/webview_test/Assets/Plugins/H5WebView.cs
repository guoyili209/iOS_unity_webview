using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using Newtonsoft.Json;


public class H5WebView : MonoBehaviour
{
    [DllImport("__Internal")]
    // public static extern void IOSshowWebView(string URL, int pixelSpace);
    public static extern void CSharpMessage(string json);
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void OnButtonClick(){
        JSONTest obj = new JSONTest();
        obj.url = "http://192.168.11.153:3000/index.html";
        obj.gameObjName = "OC";
        obj.OCMessageMethodName = "OCMessage";
        // obj.url = "http://www.baidu.com";
            obj.data = "test";
            obj.msgType = 100;
            obj.server_key = "oTSZTWFrC7LJ2HrRFtTgyR2yQo0sK0hi";
            obj.bundle_id = "com.bingo.match.money.win.sm";
            obj.udid = "bingo_android_sm_b747f0bd07db0071f3737d1b13f85f4ae1e3978e";
            obj.authorization = "2310150_wH8FplV6psAcXabkZginMRBeDDkT5Qz93S3v2QiXRPdi25DCEZLYeeN0cXaGhEMI3TEUOV7jR65nmDFfgnUt2hpyWUqYeUfxjEgU";
            obj.version = 30;
            obj.timezone="America/Los_Angeles";

        string json = JsonConvert.SerializeObject(obj);
        CSharpMessage(json);
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
   public string gameObjName{get;set;}
   public string OCMessageMethodName{get;set;}
   public string data{get;set;}
   public string server_key{get;set;}
   public string bundle_id{get;set;}

   public string udid{get;set;}
   public string authorization{get;set;}
   public int version{get;set;}
   public string timezone{get;set;}

}
