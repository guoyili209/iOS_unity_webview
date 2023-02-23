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
    public void OnButtonClick()
    {
        JSONTest obj = new JSONTest();
        obj.url = "http://192.168.101.110:3000/index.html";
        obj.gameObjName = "OC";
        obj.OCMessageMethodName = "OCMessage";
        // obj.url = "http://www.baidu.com";
        ADJson adjson = new ADJson();
        adjson.ad_status = "REWARD";
        // obj.data = "{\"ad_status\":\"REWARD\",\"network_worth\":\"\",\"network_id\":\"\",\"network_name\":\"\",\"ad_pos\":\"\"}";
        ChargeJSON chargeJSON = new ChargeJSON();
        ChargeData chargeData = new ChargeData();
        chargeData.charge_id = 11017;
        chargeJSON.data = chargeData;
        obj.data = chargeJSON;
        obj.msgType = 101;
        obj.server_key = "";
        obj.bundle_id = "com.test.bingocash";
        obj.udid = "19BEF575-9757-42C8-909B-D3B6CD06CB9B";
        obj.authorization = "30003918_dc957d71c8b605958415352c31fe3023a118e1a8";
        obj.version = 44;
        obj.timezone = "Asia/Shanghai";


        string json = JsonConvert.SerializeObject(obj);
        Debug.Log(json);
        CSharpMessage(json);
        // IOSshowWebView("http://www.baidu.com",1);

    }
    public void OnClickDropFrame()
    {
        Application.targetFrameRate = 1;
    }
    // Update is called once per frame
    void Update()
    {
        int sum=0;
        for(int i=0;i<100000000;i++){
            sum+=i;
        }
    }
}
public class ChargeData
{
    public int charge_id { get; set; }
}
public class ChargeJSON
{
    public ChargeData data { set; get; }
}
public class ADJson
{
    public string ad_status { get; set; }
}
// [System.Serializable]
public class JSONTest
{
    public string url { get; set; }
    public int msgType { get; set; }
    public string gameObjName { get; set; }
    public string OCMessageMethodName { get; set; }
    public ChargeJSON data { get; set; }
    public string server_key { get; set; }
    public string bundle_id { get; set; }

    public string udid { get; set; }
    public string authorization { get; set; }
    public int version { get; set; }
    public string timezone { get; set; }

}
