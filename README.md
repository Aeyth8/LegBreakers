# LegBreakers
 Open source DLL & SDK for ByteBreakers, a game that is still in the prototype stage 💀


# How To Use API

Still beyond unfinished, but it allows you to authorize logging in (if you launch from Steam)

To use it simply open command prompt and drag the ``mkcert-v1.4.4-windows-amd64.exe`` into the window, then type in the command ``create-cert``

You will find the output certificates within your C:/Users/*Name*/: 

There's definitely a way to customize the output location but I'm too lazy to find out + document it right now.

[Official Site](https://github.com/FiloSottile/mkcert?tab=readme-ov-file)

After you place get the certificates you will want to name them ``local.pem`` and ``local-key.pem``

Then you will want to open your ``hosts`` file within ``C:\Windows\System32\hosts``

You will want to add a new entry 

``127.0.0.1 matcha-prototype-api.odysseyinteractive.gg``

This is a decently complicated process for so little, until I manage to create a full system, this is how you would use the custom API.

I will work on this, but I've only just started.