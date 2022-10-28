using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Newtonsoft.Json;

public class OCMsg : MonoBehaviour
{
    // [SerializeField]
    public Text txt;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OCMessage(string json){
        OCJson _json= JsonConvert.DeserializeObject<OCJson>(json);
        txt.text = json;
    }
}


public class OCJson
{
    public int msgType{get;set;}
    public int msg{get;set;}
}