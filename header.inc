<link href="[##cms.cms.cdn##]/css/login-register.css" type="text/css" rel="stylesheet" />
<basis core="dbsource" source="basiscore" name="contact" mid="5" lid="1" usedforid="9252">
    <member name="info" type="view" />
</basis>
<header id="header-resize" class="header p-relative">
    <section class="header-bottom">
        <div class="inner-resize">
            <div class="first-part-header">
                <div class="float-left logo-part">
                    <a href="/" class="text-center">
                        <img class="logo" src="[##cms.cms.cdn##]/images/logo-demo.png" width="" height="36" alt="tripcenter" />
                    </a>
                </div>
                <div class="float-left hvr-icon-buzz login-part">
                    <div class="Login_Information">
                          <basis core="call" file="authentication/modal"></basis>
                    </div>
                </div>
                <div class="float-right font_14 dir-rtl width_60 menu-part">
                    <nav class="section-menu p-relative">
                        <ul class="nav-bar">
                            <li class="menu-item"><a href="/" class="color_2">صفحه اصلی</a></li>
                            <li class="menu-item"><a href="/about-us.bc">درباره ما </a></li>
                            <li class="menu-item"><a href="/contact-us.bc">تماس با ما</a></li>
                            <li class="menu-item"><a href="/فرم-درخواست-دمو">درخواست خرید</a></li>
                        </ul>
                    </nav>
                </div>

                <div class="clr"></div>
            </div>
            <div class="second-part-header p-relative unvisible dir-rtl text-center font_16">
                <div class="col1-second-part-header float-right"><a href="#menu" class="menu_link"><span></span></a>
                </div>
                <div class="col2-second-part-header float-right"><a href="/"><img src="[##cms.cms.cdn##]/images/M_logo-demo.png"
                            alt="tripcenter" width="" height="50" /></a></div>
                <div class="col3-second-part-header float-left p-relative"></div>
                <nav id="menu" class="unvisible">
                    <div class="top-menu"><img src="[##cms.cms.cdn##]/images/M_logo-demo.png" alt="tripcenter" width="" height="50" />
                    </div>
                    <ul>
                        <li class="Selected"><a href="/"><i class="fa fa-home"></i>صفحه اصلی</a>
                        </li>
                        <li><i class="fa fa-user"></i><span>حساب کاربری</span>
                            <ul>
                                <li class="Login-statusAllowed"><a onclick="Login_funcmob(this)" class="Login-options" data-type="2"><i
                                            class="fa fa-sign-in-alt"></i>ورود به حساب کاربری</a></li>
                                <li><a onclick="Login_funcmob(this)" class="Login-options" data-type="3"><i class="fa fa-user"></i>ثبت نام</a>
                                </li>
                                <li><a onclick="Login_funcmob(this)" class="Login-options" data-type="4"><i class="fa fa-unlock"></i>بازیابی
                                        کلمه عبور</a></li>
                                <li><a onclick="Login_funcmob(this)" class="Login-options" data-type="5"><i class="fa fa-user"></i>ارسال مجدد
                                        ایمیل</a></li>
                            </ul>
                        </li>
                        <li><a href="#box2-resize">ورود همکار</a></li>
                        <li><a href="#box4-resize">درباره ما </a></li>
                        <li><a href="#box6-resize">تماس با ما</a></li>
                        <li><a href="/فرم-درخواست-دمو">درخواست دمو</a></li>
                    </ul>
                </nav>
                <div class="clr"></div>
            </div>
            <div class="clr"></div>
        </div>
    </section>
    <div class="clr"></div>
</header>